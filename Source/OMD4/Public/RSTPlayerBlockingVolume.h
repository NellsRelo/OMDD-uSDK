#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "RSTPlayerBlockingVolume.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTPlayerBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    ARSTPlayerBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

