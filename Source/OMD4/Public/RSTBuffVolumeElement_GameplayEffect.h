#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTBuffVolumeConditionalFloatArr.h"
#include "RSTBuffVolumeElement.h"
#include "RSTBuffVolumeGameplayEffectDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "RSTBuffVolumeElement_GameplayEffect.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FRSTBuffVolumeElement_GameplayEffect : public FRSTBuffVolumeElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTBuffVolumeConditionalFloatArr> SetByCallerValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverridePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTBuffVolumeConditionalFloatArr PeriodOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunCustomLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CustomLogicTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTBuffVolumeGameplayEffectDelegate Delegate;
    
    OMD4_API FRSTBuffVolumeElement_GameplayEffect();
};

