#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityCollisionMagnitude.h"
#include "RSTAbilityCollisionTrigger.h"
#include "RSTAbilityCollisionTriggerCylinder.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAbilityCollisionTriggerCylinder : public URSTAbilityCollisionTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityCollisionMagnitude Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityCollisionMagnitude HalfHeight;
    
    URSTAbilityCollisionTriggerCylinder();

};

