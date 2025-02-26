#pragma once
#include "CoreMinimal.h"
#include "RSTModifierBase.h"
#include "RSTPropertyModifier.generated.h"

class URSTPropertyModifierOperation;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifier : public URSTModifierBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTPropertyModifierOperation*> Operations;
    
    URSTPropertyModifier();

};

