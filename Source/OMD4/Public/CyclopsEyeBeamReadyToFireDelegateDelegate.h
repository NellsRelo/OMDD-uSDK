#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CyclopsEyeBeamReadyToFireDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCyclopsEyeBeamReadyToFireDelegate, AActor*, HitActor, FVector, HitLocation);

