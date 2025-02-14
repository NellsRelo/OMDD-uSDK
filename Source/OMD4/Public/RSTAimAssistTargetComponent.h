#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "RSTAimAssistTargetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTAimAssistTargetComponent : public USphereComponent {
    GENERATED_BODY()
public:
    URSTAimAssistTargetComponent(const FObjectInitializer& ObjectInitializer);

};

