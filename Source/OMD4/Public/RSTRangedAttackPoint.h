#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "RSTRangedAttackPoint.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTRangedAttackPoint : public UArrowComponent {
    GENERATED_BODY()
public:
    URSTRangedAttackPoint(const FObjectInitializer& ObjectInitializer);

};

