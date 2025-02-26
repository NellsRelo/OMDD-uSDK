#pragma once
#include "CoreMinimal.h"
#include "RSTPickupParameterMods.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTPropertyModifierValue_PickupParameterMods.generated.h"

class URSTPropertyCustomOperation_PickupParameterMods;
class URSTPropertyModifierCustomValue_PickupParameterMods;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_PickupParameterMods : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPickupParameterMods Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_PickupParameterMods* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_PickupParameterMods* CustomOperation;
    
    URSTPropertyModifierValue_PickupParameterMods();

};

