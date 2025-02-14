#pragma once
#include "CoreMinimal.h"
#include "NavPowerObstructionComponent.h"
#include "RSTObstructionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTObstructionComponent : public UNavPowerObstructionComponent {
    GENERATED_BODY()
public:
    URSTObstructionComponent(const FObjectInitializer& ObjectInitializer);

};

