#pragma once
#include "CoreMinimal.h"
#include "RSTDamageModEntry.h"
#include "RSTPropertyModifierValue_Struct.h"
#include "RSTPropertyModifierValue_DamageModEntry.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_DamageModEntry : public URSTPropertyModifierValue_Struct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTDamageModEntry Val;
    
    URSTPropertyModifierValue_DamageModEntry();

};

