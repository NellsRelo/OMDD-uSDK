#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/HitResult.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTThreatGroup.h"
#include "RSTAttackableInterface.h"
#include "RSTRift.h"
#include "RSTRiftCrystal.generated.h"

class AActor;
class APawn;
class UBoxComponent;
class UNavPowerObstructionComponent;
class URSTAttackLocationsComponent;
class URSTHealthComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTRiftCrystal : public ARSTRift/*, public IRSTAttackableInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GeneratedBoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName AliveCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName DeadCollisionProfile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAttackLocationsComponent* AttackLocsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavPowerObstructionComponent* NavPowerObstructionComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HitCueTag;
    
    ARSTRiftCrystal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDeathStarted(AActor* OwningActor, const AActor* InInstigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(URSTHealthComponent* HealthComp, float Damage, AActor* DamageCauser, const FHitResult& HitResult, bool bHasSpec, const FGameplayEffectSpec& Spec);
    

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
};

