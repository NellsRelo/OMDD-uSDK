#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ERSTThreatGroup.h"
#include "RSTAttackableInterface.generated.h"

class AActor;
class APawn;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class URSTAttackableInterface : public UInterface {
    GENERATED_BODY()
};

class IRSTAttackableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool UsesAggroCap() const PURE_VIRTUAL(UsesAggroCap, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsFixed() PURE_VIRTUAL(IsFixed, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsAggroImmune() const PURE_VIRTUAL(IsAggroImmune, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasPendingAttackLoc() PURE_VIRTUAL(HasPendingAttackLoc, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetThreatValue() PURE_VIRTUAL(GetThreatValue, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual uint8 GetThreatCap(ERSTThreatGroup ThreatGroup) const PURE_VIRTUAL(GetThreatCap, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FGameplayTagContainer GetIgnoredAggroTags() const PURE_VIRTUAL(GetIgnoredAggroTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector GetAttackLoc(FVector AttackerLoc, AActor* Attacker, float RangeToCheck, bool bRangedAttack) PURE_VIRTUAL(GetAttackLoc, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanBeAggroed(APawn* Attacker, ERSTThreatGroup ThreatGroup) const PURE_VIRTUAL(CanBeAggroed, return false;);
    
};

