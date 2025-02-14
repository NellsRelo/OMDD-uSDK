#pragma once
#include "CoreMinimal.h"
#include "RSTAdditionalPickupTable.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTPropertyModifierValue_AdditionalPickupTable.generated.h"

class URSTPropertyCustomOperation_AdditionalPickupTable;
class URSTPropertyModifierCustomValue_AdditionalPickupTable;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_AdditionalPickupTable : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAdditionalPickupTable Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_AdditionalPickupTable* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_AdditionalPickupTable* CustomOperation;
    
    URSTPropertyModifierValue_AdditionalPickupTable();

};

