#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTTriggerInstigatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTTriggerInstigatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URSTTriggerInstigatorComponent(const FObjectInitializer& ObjectInitializer);

};

