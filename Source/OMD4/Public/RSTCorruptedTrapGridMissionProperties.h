#pragma once
#include "CoreMinimal.h"
#include "RSTCorruptedTrapGridMissionProperties.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTCorruptedTrapGridMissionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaxCountPerGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceOfNone;
    
    FRSTCorruptedTrapGridMissionProperties();
};

