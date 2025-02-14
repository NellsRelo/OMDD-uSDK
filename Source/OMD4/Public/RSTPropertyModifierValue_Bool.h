#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierValue.h"
#include "RSTPropertyModifierValue_Bool.generated.h"

class URSTPropertyCustomOperation_Bool;
class URSTPropertyModifierCustomValue_Bool;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_Bool : public URSTPropertyModifierValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_Bool* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_Bool* CustomOperation;
    
    URSTPropertyModifierValue_Bool();

};

