#pragma once
#include "CoreMinimal.h"
#include "RSTNPEMissionIndex.h"
#include "RSTNPEMissionOptions.generated.h"

USTRUCT(BlueprintType)
struct FRSTNPEMissionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NPEIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTNPEMissionIndex> MissionIndexOptions;
    
    OMD4_API FRSTNPEMissionOptions();
};

