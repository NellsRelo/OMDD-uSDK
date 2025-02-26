#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTAbilitySet_AttributeSet.h"
#include "RSTAbilitySet_GameplayAbility.h"
#include "RSTAbilitySet_GameplayEffect.h"
#include "RSTAbilitySet.generated.h"

class URSTGameplayAbility;

UCLASS(Blueprintable, Const)
class URSTAbilitySet : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAbilitySet_GameplayAbility> GrantedGameplayAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAbilitySet_GameplayEffect> GrantedGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAbilitySet_AttributeSet> GrantedAttributes;
    
public:
    URSTAbilitySet();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    URSTGameplayAbility* FindAbilityWithTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    URSTGameplayAbility* FindAbility(const FGameplayTagQuery& TagQuery) const;
    
};

