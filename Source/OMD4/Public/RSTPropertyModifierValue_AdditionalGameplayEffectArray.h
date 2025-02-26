#pragma once
#include "CoreMinimal.h"
#include "RSTAdditionalGameplayEffectData.h"
#include "RSTPropertyModifierValue.h"
#include "RSTPropertyModifierValue_AdditionalGameplayEffectArray.generated.h"

class URSTPropertyCustomOperation_AdditionalGameplayEffectArray;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_AdditionalGameplayEffectArray : public URSTPropertyModifierValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTAdditionalGameplayEffectData> Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_AdditionalGameplayEffectArray* CustomOperation;
    
    URSTPropertyModifierValue_AdditionalGameplayEffectArray();

};

