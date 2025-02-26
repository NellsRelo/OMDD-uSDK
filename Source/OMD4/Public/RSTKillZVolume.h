#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "GameFramework/KillZVolume.h"
#include "RSTKillZVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTKillZVolume : public AKillZVolume {
    GENERATED_BODY()
public:
    ARSTKillZVolume(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

