#pragma once
#include "CoreMinimal.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTPropertyModifierValue_AdditionalGameplayEffect.generated.h"

class URSTPropertyCustomOperation_AdditionalGameplayEffect;
class URSTPropertyModifierCustomValue_AdditionalGameplayEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_AdditionalGameplayEffect : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAdditionalGameplayEffectData Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_AdditionalGameplayEffect* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_AdditionalGameplayEffect* CustomOperation;
    
    URSTPropertyModifierValue_AdditionalGameplayEffect();

};

