#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ERSTTeams.h"
#include "ERSTThreatGroup.h"
#include "RSTAbilityPlaceable.h"
#include "RSTActiveSubobject.h"
#include "RSTAttackableInterface.h"
#include "RSTTeamAgentInterface.h"
#include "RSTHammerDecoy.generated.h"

class AActor;
class APawn;
class UCapsuleComponent;
class URSTAttackLocationsComponent;
class URSTHealthComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTHammerDecoy : public ARSTActiveSubobject/*, public IRSTAbilityPlaceable, public IRSTTeamAgentInterface, public IRSTAttackableInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAttackLocationsComponent* AttackLocationsComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DefaultThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LargeThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RangedThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HuntersThreatCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BossThreatCap;
    
public:
    ARSTHammerDecoy(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETeamAttitude::Type GetTeamAttitudeTowardsActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ERSTTeams GetTeam() const;
    

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

