#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "RSTAbilitySet_GrantedHandles.h"
#include "RSTDamageModifiable.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTInteractableTarget.h"
#include "RSTInteractionOption.h"
#include "RSTInteractionQuery.h"
#include "RSTPingableInterface.h"
#include "RSTPropertyModifiable.h"
#include "RSTTagIdentifierInterface.h"
#include "RSTTeamAgentInterface.h"
#include "RSTRift.generated.h"

class UCapsuleComponent;
class UPrimitiveComponent;
class URSTAbilitySet;
class URSTAbilitySystemComponent;
class URSTDamageModifierComponent;
class URSTMapDisplayComponent;
class URSTModifierComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTRift : public AActor/*, public IAbilitySystemInterface, public IRSTTeamAgentInterface, public IGameplayTagAssetInterface, public IRSTTagIdentifierInterface, public IRSTInteractableTarget, public IRSTPropertyModifiable, public IRSTPingableInterface, public IRSTDamageModifiable*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftInfluenceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftLightningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftLightningRefireMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RiftLightningRefireMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RiftDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTAbilitySet*> AbilitySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTAbilitySet_GrantedHandles GrantedHandles;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* RiftEnterArea;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTMapDisplayComponent* MapDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InteractionLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTModifierComponent* ModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTDamageModifierComponent* DamageModifierComponent;
    
public:
    ARSTRift(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RiftEnterBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRiftTeleportTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetRiftFXLocation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInteract(const FGameplayAbilityActorInfo& ActorInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform BP_GetRiftTeleportTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FRSTInteractionOption> BP_GatherInteractionOptions(const FRSTInteractionQuery& InteractQuery);
    

    // Fix for true pure virtual functions not being implemented
public:
    //UFUNCTION(BlueprintCallable)
    //bool HasMatchingGameplayTag(FGameplayTag tagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    //
    //UFUNCTION(BlueprintCallable)
    //void StopInteraction(AActor* InteractingActor) override PURE_VIRTUAL(StopInteraction,);
    //
};

