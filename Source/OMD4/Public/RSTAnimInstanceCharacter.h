#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTAnimInstance.h"
#include "RSTAnimInstanceCharacter.generated.h"

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTAnimInstanceCharacter : public URSTAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNormalizeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForwardLocomotionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RightLocomotionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NormalizedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PelvisTwist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasRotationLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RootYawOffset;
    
public:
    URSTAnimInstanceCharacter();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldNormalizeSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightLocomotionValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetForwardLocomotionValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirection() const;
    
};

