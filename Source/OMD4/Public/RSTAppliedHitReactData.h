#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EKnockbackType.h"
#include "RSTAppliedHitReactData.generated.h"

class URSTAppliedHitReactData;

UCLASS(Blueprintable)
class OMD4_API URSTAppliedHitReactData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector KnockbackDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKnockbackType KnockbackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockbackDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageImmunityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterruptAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlinch;
    
    URSTAppliedHitReactData();

    UFUNCTION(BlueprintCallable)
    static URSTAppliedHitReactData* CreateAppliedHitReactData(FVector InKnockbackDirection, float InKnockbackDistance, float InKnockbackHeight, EKnockbackType InKnockbackType, float InKnockbackDuration, float InDamageImmunityDuration, float InInterruptDuration);
    
};

