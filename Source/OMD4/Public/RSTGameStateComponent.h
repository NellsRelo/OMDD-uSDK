#pragma once
#include "CoreMinimal.h"
#include "Components/GameStateComponent.h"
#include "RSTGameStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTGameStateComponent : public UGameStateComponent {
    GENERATED_BODY()
public:
    URSTGameStateComponent(const FObjectInitializer& ObjectInitializer);

};

