#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "ERSTCharacterWeightClass.h"
#include "ERSTFireHookshotClawState.h"
#include "FireHookshotClawDelegateDelegate.h"
#include "RSTAbilityTask_FireHookshotClaw.generated.h"

class ARSTCharacter;
class UGameplayAbility;
class URSTAbilityTask_FireHookshotClaw;

UCLASS(Blueprintable)
class OMD4_API URSTAbilityTask_FireHookshotClaw : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireHookshotClawDelegate OnTargetHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireHookshotClawDelegate OnClawRetracted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARSTCharacter> GrappledCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HookshotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HoldDuration;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint16 GrappleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERSTFireHookshotClawState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ERSTCharacterWeightClass MaxWeightClass;
    
public:
    URSTAbilityTask_FireHookshotClaw();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static URSTAbilityTask_FireHookshotClaw* FireHookshotClaw(UGameplayAbility* OwningAbility, const FVector& NewStartLocation, const FVector& NewTargetLocation, float NewHookshotSpeed, float NewHoldDuration, ERSTCharacterWeightClass NewMaxWeightClass);
    
};

