// -*- mode: groovy -*-
// vim: set filetype=groovy :
@Library('agora-build-pipeline-library') _
import groovy.transform.Field

buildUtils = new agora.build.BuildUtils()

compileConfig = [
    "sourceDir": "agora-unreal-sdk-cpp-ng",
    "non-publish": [
        "command": "./.github/ci/build/build_mac.sh",
        "extraArgs": "",
    ],
    "publish": [
        "command": "./.github/ci/build/build_mac.sh",
        "extraArgs": "",
    ]
] 

def doBuild(buildVariables) {
    type = params.Package_Publish ? "publish" : "non-publish"
    command = compileConfig.get(type).command
    preCommand = compileConfig.get(type).get("preCommand", "")
    postCommand = compileConfig.get(type).get("postCommand", "")
    extraArgs = compileConfig.get(type).extraArgs
    extraArgs += " " + params.getOrDefault("extra_args", "")
    commandConfig = [
        "command": command,
        "sourceRoot": "${compileConfig.sourceDir}",
        "extraArgs": extraArgs
    ]
    loadResources(["config.json", "artifactory_utils.py"])
    buildUtils.customBuild(commandConfig, preCommand, postCommand)
}

def doPublish(buildVariables) {
    if (!params.Package_Publish) {
        return
    }
    (shortVersion, releaseVersion) = buildUtils.getBranchVersion()
    def archiveInfos = [
        [
          "type": "ARTIFACTORY",
          "archivePattern": "*.zip",
          "serverPath": "AgoraUnrealRTCSDK/${shortVersion}/${buildVariables.buildDate}/${env.platform}",
          "serverRepo": "CSDC_repo/Unreal_RTC" // ATTENTIONS: Update the artifactoryRepo if needed.
        ]
    ]
    archive.archiveFiles(archiveInfos)
    sh "rm -rf *.zip || true"
}

pipelineLoad(this, "AgoraUnrealRTCSDK", "build", "mac", "unreal_mac")