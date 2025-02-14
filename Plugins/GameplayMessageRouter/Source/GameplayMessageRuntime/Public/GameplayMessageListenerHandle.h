#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayMessageListenerHandle.generated.h"

class UGameplayMessageSubsystem;

USTRUCT(BlueprintType)
struct GAMEPLAYMESSAGERUNTIME_API FGameplayMessageListenerHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGameplayMessageSubsystem> Subsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
public:
    FGameplayMessageListenerHandle();
};

