#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "RSTAssetChunkAssignments.h"
#include "RSTDirectoryChunkAssignments.h"
#include "RSTAssetManagerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class OMD4_API URSTAssetManagerSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAssetChunkAssignments> AssetChunkAssignments;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTDirectoryChunkAssignments> DirectoryChunkAssignments;
    
    URSTAssetManagerSettings();

};

