#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "RSTMapVolumeInfo.h"
#include "RSTMapData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OMD4_API URSTMapData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTMapVolumeInfo> MapVolumes;
    
    URSTMapData();

};

