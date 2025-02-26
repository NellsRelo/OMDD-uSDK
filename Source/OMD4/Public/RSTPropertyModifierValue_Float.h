#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierValue.h"
#include "RSTPropertyModifierValue_Float.generated.h"

class URSTPropertyCustomOperation_Float;
class URSTPropertyModifierCustomValue_Float;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_Float : public URSTPropertyModifierValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_Float* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_Float* CustomOperation;
    
    URSTPropertyModifierValue_Float();

};

