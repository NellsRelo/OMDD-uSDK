#pragma once
#include "CoreMinimal.h"
#include "RSTLaunchImpactData.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTLaunchImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchImpactDamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchImpactBaseDamage;
    
    FRSTLaunchImpactData();
};

