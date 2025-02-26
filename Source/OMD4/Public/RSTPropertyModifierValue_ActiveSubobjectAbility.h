#pragma once
#include "CoreMinimal.h"
#include "RSTActiveSubobjectAbility.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTPropertyModifierValue_ActiveSubobjectAbility.generated.h"

class URSTPropertyCustomOperation_ActiveSubobjectAbility;
class URSTPropertyModifierCustomValue_ActiveSubobjectAbility;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_ActiveSubobjectAbility : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTActiveSubobjectAbility Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_ActiveSubobjectAbility* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_ActiveSubobjectAbility* CustomOperation;
    
    URSTPropertyModifierValue_ActiveSubobjectAbility();

};

