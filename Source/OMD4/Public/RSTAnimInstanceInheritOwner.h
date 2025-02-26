#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTAnimInstance.h"
#include "RSTAnimInstanceInheritOwner.generated.h"

class ACharacter;
class URSTAnimInstanceCharacter;

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTAnimInstanceInheritOwner : public URSTAnimInstance {
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
    
public:
    URSTAnimInstanceInheritOwner();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetOwningCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTAnimInstanceCharacter* GetOwningAnimInstance() const;
    
};

