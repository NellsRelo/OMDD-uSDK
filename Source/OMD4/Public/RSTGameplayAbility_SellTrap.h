#pragma once
#include "CoreMinimal.h"
#include "GameplayPrediction.h"
#include "ERSTSellTrapAbilityResult.h"
#include "RSTGameplayAbility.h"
#include "RSTSellTrapAbilityRequest.h"
#include "RSTGameplayAbility_SellTrap.generated.h"

class ARSTTrap;
class UAbilityTask_WaitInputPress;
class UAbilityTask_WaitInputRelease;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_SellTrap : public URSTGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, FRSTSellTrapAbilityRequest> Requests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputPress* InputPressTaskHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_WaitInputRelease* InputReleaseTaskHandle;
    
public:
    URSTGameplayAbility_SellTrap();

protected:
    UFUNCTION(Reliable, Server)
    void Server_SellTrap(uint8 RequestID, ARSTTrap* TrapToSell, FPredictionKey PredictionKey);
    
    UFUNCTION(BlueprintCallable)
    void OnInputReleased(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnInputPressed(float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ConfirmTrapSold(uint8 RequestID, ERSTSellTrapAbilityResult Status);
    
};

