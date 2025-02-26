#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTModifierBase.h"
#include "Templates/SubclassOf.h"
#include "RSTModifier_ApplyGameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTModifier_ApplyGameplayEffect : public URSTModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> SetByCallerValues;
    
    URSTModifier_ApplyGameplayEffect();

};

