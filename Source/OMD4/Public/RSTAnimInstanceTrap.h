#pragma once
#include "CoreMinimal.h"
#include "RSTAnimInstance.h"
#include "RSTAnimInstanceTrap.generated.h"

class ARSTTrap;

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTAnimInstanceTrap : public URSTAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAbilityActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsCooldownActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBeingPlaced: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPlacementValid: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownProgression;
    
public:
    URSTAnimInstanceTrap();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARSTTrap* GetTrap() const;
    
};

