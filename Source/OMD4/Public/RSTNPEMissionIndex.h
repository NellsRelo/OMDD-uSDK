#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTNPEMissionIndex.generated.h"

USTRUCT(BlueprintType)
struct FRSTNPEMissionIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> MissionOptionIds;
    
    OMD4_API FRSTNPEMissionIndex();
};

