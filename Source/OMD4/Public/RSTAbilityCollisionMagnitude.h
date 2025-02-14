#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "ERSTAbilityCollisionMagnitudeCalculation.h"
#include "RSTAbilityCollisionMagnitude.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTAbilityCollisionMagnitude {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTAbilityCollisionMagnitudeCalculation MagnitudeCalculationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ScalableFloatMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AttributeBasedMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SetByCallerMagnitude;
    
public:
    FRSTAbilityCollisionMagnitude();
};

