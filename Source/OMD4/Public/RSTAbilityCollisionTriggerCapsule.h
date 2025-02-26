#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityCollisionMagnitude.h"
#include "RSTAbilityCollisionTrigger.h"
#include "RSTAbilityCollisionTriggerCapsule.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAbilityCollisionTriggerCapsule : public URSTAbilityCollisionTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityCollisionMagnitude Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityCollisionMagnitude HalfHeight;
    
    URSTAbilityCollisionTriggerCapsule();

};

