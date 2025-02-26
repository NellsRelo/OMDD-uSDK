#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierValue.h"
#include "RSTPropertyModifierValue_Int.generated.h"

class URSTPropertyCustomOperation_Int;
class URSTPropertyModifierCustomValue_Int;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_Int : public URSTPropertyModifierValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_Int* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_Int* CustomOperation;
    
    URSTPropertyModifierValue_Int();

};

