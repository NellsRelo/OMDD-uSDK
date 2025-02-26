#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameFramework/OnlineReplStructs.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "ERSTTrapPlacementFailureReason.h"
#include "RSTCharacter.h"
#include "RSTCharacter_DeathEventDelegate.h"
#include "RSTHotbarInterface.h"
#include "RSTInteractableTarget.h"
#include "RSTInteractionOption.h"
#include "RSTReviveData.h"
#include "Templates/SubclassOf.h"
#include "RSTPlayerCharacter.generated.h"

class AActor;
class ARSTPlayerState;
class ARSTTrap;
class URSTAttachmentManagerComponent;
class URSTCameraComponent;
class URSTCameraMode;
class URSTChargeComponent;
class URSTCommunicationDefinition;
class URSTEquipmentManagerComponent;
class URSTHealthComponent;
class URSTPlayerAimAssistComponent;
class URSTRecoilComponent;
class URSTSkinDefinition;
class URSTTrapPlacementComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTPlayerCharacter : public ARSTCharacter, public IRSTInteractableTarget, public IRSTHotbarInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTCommunicationDefinition* DownedPing;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTCharacter_DeathEvent OnDownedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTCharacter_DeathEvent OnRevivedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInteractionOption ReviveInteractionOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAttachmentManagerComponent* AttachmentManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTTrapPlacementComponent* TrapPlacementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTChargeComponent* ChargeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTEquipmentManagerComponent* EquipmentManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTRecoilComponent* RecoilComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPlayerAimAssistComponent* AimAssistComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NearbyActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearbyActorsRadius;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSTCameraMode> DeathCameraMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bSpawningFromRejoin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTSkinDefinition* CurrentlyAppliedSkin;
    
public:
    ARSTPlayerCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RecallNearbyActorsBP();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTrapPlacementFailed(ARSTTrap* Trap, ERSTTrapPlacementFailureReason FailureReason);
    
    UFUNCTION(BlueprintCallable)
    void OnTrapPlaced(ARSTTrap* Trap);
    
    UFUNCTION(BlueprintCallable)
    void OnSkinDefinitionChanged(ARSTPlayerState* RSTPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnReviveDataChanged(FRSTReviveData Data);
    
    UFUNCTION(BlueprintCallable)
    void OnPRSBegin(FGameplayTag PRSTag);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerReadyStateChanged(FGameplayTag PRSTag, FUniqueNetIdRepl PlayerNetID, bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerControllerPlayerStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(URSTHealthComponent* InHealthComponent, float OldValue, float NewValue, AActor* InInstigator, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    
    UFUNCTION(BlueprintCallable)
    void OnGameEnding();
    
    UFUNCTION(BlueprintCallable)
    void OnGameEnded();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAttachmentsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAttachmentManagerComponent* GetAttachmentManager() const;
    
    UFUNCTION(BlueprintCallable)
    void EvaluateNearbyActor(AActor* nearbyActor, float distSquaredFromPlayer);
    
    UFUNCTION(BlueprintCallable)
    void EnableCameraRendering();
    
    UFUNCTION(BlueprintCallable)
    void DisableCameraRendering();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNearbyActorRemoved(AActor* nearbyActorRemoved);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNearbyActorAdded(AActor* nearbyActorAdded);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInteract(const FGameplayAbilityActorInfo& ActorInfo);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopInteraction(AActor* InteractingActor) override PURE_VIRTUAL(StopInteraction,);
    
};

