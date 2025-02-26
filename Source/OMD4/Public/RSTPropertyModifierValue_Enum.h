#pragma once
#include "CoreMinimal.h"
#include "RSTEnumField.h"
#include "RSTPropertyModifierValue.h"
#include "RSTPropertyModifierValue_Enum.generated.h"

class URSTPropertyCustomOperation_EnumField;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_Enum : public URSTPropertyModifierValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTEnumField EnumField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_EnumField* CustomOperation;
    
    URSTPropertyModifierValue_Enum();

};

