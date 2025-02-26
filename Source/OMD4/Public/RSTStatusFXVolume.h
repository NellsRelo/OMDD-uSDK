#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTStatusFXVolume.generated.h"

class AActor;
class URSTAbilitySet;
class URSTAbilitySystemComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTStatusFXVolume : public ATriggerBox/*, public IAbilitySystemInterface*/{
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URSTAbilitySet> AbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnGoBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoOverlapChecksInTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAdditionalGameplayEffectData> EffectsToApply;
    
public:
    ARSTStatusFXVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnReceivedOverlap(AActor* MyActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedEndOverlap(AActor* MyActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAbilitySystemComponent* GetRSTAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyGameplayEffects(AActor* TargetActor);
    

    // Fix for true pure virtual functions not being implemented
};

