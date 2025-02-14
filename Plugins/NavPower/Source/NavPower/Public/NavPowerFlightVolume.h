#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "NavPowerFlightVolume.generated.h"

UCLASS(Blueprintable)
class NAVPOWER_API ANavPowerFlightVolume : public AVolume {
    GENERATED_BODY()
public:
    ANavPowerFlightVolume(const FObjectInitializer& ObjectInitializer);

};

