#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayMessageSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYMESSAGERUNTIME_API UGameplayMessageSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameplayMessageSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void K2_BroadcastMessage(FGameplayTag Channel, const int32& Message);
    
};

