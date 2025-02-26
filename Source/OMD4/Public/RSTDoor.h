#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "ERSTThreatGroup.h"
#include "RSTAttackableInterface.h"
#include "RSTPingableInterface.h"
#include "RSTTeamAgentInterface.h"
#include "RSTDoor.generated.h"

class APawn;
class UBoxComponent;
class UMeshComponent;
class UPrimitiveComponent;
class URSTAbilitySet;
class URSTAbilitySystemComponent;
class URSTAttackLocationsComponent;
class URSTHealthComponent;
class URSTMapDisplayComponent;
class URSTObstructionComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTDoor : public AActor/*, public IAbilitySystemInterface, public IRSTTeamAgentInterface, public IRSTAttackableInterface, public IRSTPingableInterface, public IGameplayTagAssetInterface*/ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOpen, meta=(AllowPrivateAccess=true))
    uint8 bIsOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DoorDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UpdateHealthbar, meta=(AllowPrivateAccess=true))
    uint8 bIsDisplayingHealthBar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ThresholdBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAttackLocationsComponent* AttackLocsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHPBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsExpectingMobs, meta=(AllowPrivateAccess=true))
    uint8 bIsExpectingMobs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTMapDisplayComponent* MapDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId MyTeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTAbilitySet> AbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTObstructionComponent* NavAndCollisionComponent;
    
public:
    ARSTDoor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateNearbyPlayers();
    
    UFUNCTION(BlueprintCallable)
    void OpenDoor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UpdateHealthbar();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsExpectingMobs();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeathStarted(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathFinished(AActor* OwningActor, const AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(URSTHealthComponent* InHealthComponent, float Damage, AActor* InInstigator, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTHealthComponent* GetHealthComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DoorOpened();
    

    // Fix for true pure virtual functions not being implemented
public:
    //UFUNCTION(BlueprintCallable)
    //bool UsesAggroCap() const override PURE_VIRTUAL(UsesAggroCap, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool IsFixed() override PURE_VIRTUAL(IsFixed, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool IsAggroImmune() const override PURE_VIRTUAL(IsAggroImmune, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //bool HasPendingAttackLoc() override PURE_VIRTUAL(HasPendingAttackLoc, return false;);
    //
    //UFUNCTION(BlueprintCallable)
    //float GetThreatValue() override PURE_VIRTUAL(GetThreatValue, return 0.0f;);
    //
    //UFUNCTION(BlueprintCallable)
    //uint8 GetThreatCap(ERSTThreatGroup ThreatGroup) const override PURE_VIRTUAL(GetThreatCap, return 0;);
    //
    //UFUNCTION(BlueprintCallable)
    //FGameplayTagContainer GetIgnoredAggroTags() const override PURE_VIRTUAL(GetIgnoredAggroTags, return FGameplayTagContainer{};);
    //
    //UFUNCTION(BlueprintCallable)
    //FVector GetAttackLoc(FVector AttackerLoc, AActor* Attacker, float RangeToCheck, bool bRangedAttack) override PURE_VIRTUAL(GetAttackLoc, return FVector{};);
    //
    //UFUNCTION(BlueprintCallable)
    //bool CanBeAggroed(APawn* Attacker, ERSTThreatGroup ThreatGroup) const override PURE_VIRTUAL(CanBeAggroed, return false;);
    //
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
};

