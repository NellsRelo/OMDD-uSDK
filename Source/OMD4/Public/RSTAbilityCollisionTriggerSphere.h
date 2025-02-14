#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityCollisionMagnitude.h"
#include "RSTAbilityCollisionTrigger.h"
#include "RSTAbilityCollisionTriggerSphere.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAbilityCollisionTriggerSphere : public URSTAbilityCollisionTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityCollisionMagnitude Radius;
    
    URSTAbilityCollisionTriggerSphere();

};

