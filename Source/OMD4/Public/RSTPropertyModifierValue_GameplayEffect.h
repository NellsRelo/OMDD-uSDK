#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierValue_Class.h"
#include "Templates/SubclassOf.h"
#include "RSTPropertyModifierValue_GameplayEffect.generated.h"

class UGameplayEffect;
class URSTPropertyCustomOperation_GameplayEffect;
class URSTPropertyModifierCustomValue_GameplayEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_GameplayEffect : public URSTPropertyModifierValue_Class {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_GameplayEffect* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_GameplayEffect* CustomOperation;
    
    URSTPropertyModifierValue_GameplayEffect();

};

