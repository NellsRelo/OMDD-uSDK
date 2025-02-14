#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTModifierSubtargetMethod.h"
#include "RSTModifierSubtargetMethod_Ability.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTModifierSubtargetMethod_Ability : public URSTModifierSubtargetMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AbilityTagQuery;
    
    URSTModifierSubtargetMethod_Ability();

};

