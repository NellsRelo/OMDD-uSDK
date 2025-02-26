#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "ERSTRiftPointLossReason.h"
#include "RSTGlobalAppliedAbilityList.h"
#include "RSTGlobalAppliedEffectList.h"
#include "Templates/SubclassOf.h"
#include "RSTRiftSubsystem.generated.h"

class ARSTCharacter;
class ARSTRift;
class UGameplayAbility;
class UGameplayEffect;
class UObject;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTRiftSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTRiftProtectionChanged, const TArray<ERSTRiftPointLossReason>&, CurrentReasons, const TArray<ERSTRiftPointLossReason>&, PreviousReasons);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftProtectionCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERSTRiftPointLossReason, FGameplayTag> ProtectionOverrideCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RiftProtectionMessage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTRiftProtectionChanged OnRiftProtectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayAbility>, FRSTGlobalAppliedAbilityList> AppliedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayEffect>, FRSTGlobalAppliedEffectList> AppliedEffects;
    
public:
    URSTRiftSubsystem();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveEffectFromAll(TSubclassOf<UGameplayEffect> Effect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAbilityFromAll(TSubclassOf<UGameplayAbility> Ability);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetSpawnTransformForCharacter(ARSTRift* Rift, ARSTCharacter* Character, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARSTRift*> GetRifts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTRift* GetPrimaryRift() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyEffectToAll(TSubclassOf<UGameplayEffect> Effect);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyAbilityToAll(TSubclassOf<UGameplayAbility> Ability, UObject* SourceObject);
    
};

