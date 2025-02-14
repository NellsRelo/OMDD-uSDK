#pragma once
#include "CoreMinimal.h"
#include "RSTAnimInstanceTrap.h"
#include "RSTAnimInstanceTrap_Ballista.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTAnimInstanceTrap_Ballista : public URSTAnimInstanceTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveRotationSpeed;
    
public:
    URSTAnimInstanceTrap_Ballista();

    UFUNCTION(BlueprintCallable)
    void SetWasRenderedLastFrame(bool bInWasRenderedLastFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetRotation(float InPitch, float InYaw);
    
};

