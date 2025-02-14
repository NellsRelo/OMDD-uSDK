#pragma once
#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "RSTInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URSTInputComponent : public UEnhancedInputComponent {
    GENERATED_BODY()
public:
    URSTInputComponent(const FObjectInitializer& ObjectInitializer);

};

