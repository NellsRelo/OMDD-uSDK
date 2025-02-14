#pragma once
#include "CoreMinimal.h"
#include "RSTExternalInputAbility.h"
#include "RSTGameplayAbility_RangedWeapon.h"
#include "RSTGameplayAbility_Ranged_Refire.generated.h"

class UAbilityTask_WaitDelay;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTGameplayAbility_Ranged_Refire : public URSTGameplayAbility_RangedWeapon, public IRSTExternalInputAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RefireStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitDelay* RefireTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRetriggerNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefireDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRefireAsCooldown;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackFireCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowHeldAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndSectionName;
    
    URSTGameplayAbility_Ranged_Refire();

    UFUNCTION(BlueprintCallable)
    void OnRefireDelayFinished();
    

    // Fix for true pure virtual functions not being implemented
};

