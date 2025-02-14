#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTTrapDiscount.h"
#include "RSTPropertyModifierValue_TrapDiscount.generated.h"

class URSTPropertyCustomOperation_TrapDiscount;
class URSTPropertyModifierCustomValue_TrapDiscount;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_TrapDiscount : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTrapDiscount Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_TrapDiscount* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_TrapDiscount* CustomOperation;
    
    URSTPropertyModifierValue_TrapDiscount();

};

