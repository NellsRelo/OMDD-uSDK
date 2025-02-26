#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "RSTGlobalAppliedAbilityList.h"
#include "RSTGlobalAppliedEffectList.h"
#include "Templates/SubclassOf.h"
#include "RSTGlobalAbilitySystem.generated.h"

class AActor;
class UGameplayAbility;
class UGameplayEffect;
class UObject;
class URSTAbilitySystemComponent;

UCLASS(Blueprintable)
class URSTGlobalAbilitySystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayAbility>, FRSTGlobalAppliedAbilityList> AppliedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayEffect>, FRSTGlobalAppliedEffectList> AppliedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTAbilitySystemComponent*> RegisteredASCs;
    
public:
    URSTGlobalAbilitySystem();

    UFUNCTION(BlueprintCallable)
    void RemoveGameplayCueLocal(AActor* Target, const FGameplayTag& CueTag, UPARAM(Ref) FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveEffectFromAll(TSubclassOf<UGameplayEffect> Effect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAbilityFromAll(TSubclassOf<UGameplayAbility> Ability);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteGameplayCueLocal(AActor* Target, const FGameplayTag& CueTag, UPARAM(Ref) FGameplayCueParameters& GameplayCueParameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyEffectToAll(TSubclassOf<UGameplayEffect> Effect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyAbilityToAll(TSubclassOf<UGameplayAbility> Ability, UObject* SourceObject);
    
    UFUNCTION(BlueprintCallable)
    void AddGameplayCueLocal(AActor* Target, const FGameplayTag& CueTag, UPARAM(Ref) FGameplayCueParameters& GameplayCueParameters);
    
};

