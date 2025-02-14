#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "NavPowerExclusionVolume.generated.h"

UCLASS(Blueprintable)
class NAVPOWER_API ANavPowerExclusionVolume : public AVolume {
    GENERATED_BODY()
public:
    ANavPowerExclusionVolume(const FObjectInitializer& ObjectInitializer);

};

