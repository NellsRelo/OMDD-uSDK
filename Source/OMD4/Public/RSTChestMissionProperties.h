#pragma once
#include "CoreMinimal.h"
#include "RSTChestMissionProperties.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTChestMissionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceOfNone;
    
    FRSTChestMissionProperties();
};

