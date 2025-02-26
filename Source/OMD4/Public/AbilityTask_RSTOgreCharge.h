#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "OgreChargeFinishedDelegateDelegate.h"
#include "OgreChargeMoveCompleteDelegateDelegate.h"
#include "OgreChargeOverlapDelegateDelegate.h"
#include "AbilityTask_RSTOgreCharge.generated.h"

class AActor;
class UAbilityTask_RSTOgreCharge;
class UGameplayAbility;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class OMD4_API UAbilityTask_RSTOgreCharge : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOgreChargeOverlapDelegate OnOgreChargeOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOgreChargeMoveCompleteDelegate OnOgreChargeMoveComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOgreChargeFinishedDelegate OnOgreChargeFinished;
    
    UAbilityTask_RSTOgreCharge();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_RSTOgreCharge* RSTOgreCharge(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* DestActor, float DesiredRadius, FGameplayTag CombatCapsuleID, float Duration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOverlapCallback(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

