#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTPropertyModifierValue_ScalableFloat.generated.h"

class URSTPropertyCustomOperation_ScalableFloat;
class URSTPropertyModifierCustomValue_ScalableFloat;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_ScalableFloat : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_ScalableFloat* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_ScalableFloat* CustomOperation;
    
    URSTPropertyModifierValue_ScalableFloat();

};

