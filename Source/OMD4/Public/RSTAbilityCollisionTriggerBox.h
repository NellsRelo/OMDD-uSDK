#pragma once
#include "CoreMinimal.h"
#include "RSTAbilityCollisionMagnitude.h"
#include "RSTAbilityCollisionTrigger.h"
#include "RSTAbilityCollisionTriggerBox.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAbilityCollisionTriggerBox : public URSTAbilityCollisionTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityCollisionMagnitude HalfXSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityCollisionMagnitude HalfYSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAbilityCollisionMagnitude HalfZSize;
    
    URSTAbilityCollisionTriggerBox();

};

