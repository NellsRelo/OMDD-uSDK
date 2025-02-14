#pragma once
#include "CoreMinimal.h"
#include "RSTFloatRange.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTPropertyModifierValue_FloatRange.generated.h"

class URSTPropertyCustomOperation_FloatRange;
class URSTPropertyModifierCustomValue_FloatRange;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_FloatRange : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTFloatRange Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_FloatRange* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_FloatRange* CustomOperation;
    
    URSTPropertyModifierValue_FloatRange();

};

