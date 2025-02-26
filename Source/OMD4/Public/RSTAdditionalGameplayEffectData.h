#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTAdditionalGESetByCallerEntry.h"
#include "Templates/SubclassOf.h"
#include "RSTAdditionalGameplayEffectData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FRSTAdditionalGameplayEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTAdditionalGESetByCallerEntry> SetByCallerValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ParentSetByCallerValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyAbilityContextInformation;
    
    OMD4_API FRSTAdditionalGameplayEffectData();
};

