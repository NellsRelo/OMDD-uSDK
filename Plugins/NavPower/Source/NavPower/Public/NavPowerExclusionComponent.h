#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "NavPowerExclusionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NAVPOWER_API UNavPowerExclusionComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UNavPowerExclusionComponent(const FObjectInitializer& ObjectInitializer);

};

