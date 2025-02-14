#pragma once
#include "CoreMinimal.h"
#include "RSTModifierSubtargetMethod.h"
#include "Templates/SubclassOf.h"
#include "RSTModifierSubtargetMethod_Component.generated.h"

class UActorComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTModifierSubtargetMethod_Component : public URSTModifierSubtargetMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ComponentClass;
    
    URSTModifierSubtargetMethod_Component();

};

