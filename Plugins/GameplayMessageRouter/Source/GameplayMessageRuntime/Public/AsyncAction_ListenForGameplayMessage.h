#pragma once
#include "CoreMinimal.h"
#include "Engine/CancellableAsyncAction.h"
#include "GameplayTagContainer.h"
#include "AsyncGameplayMessageDelegateDelegate.h"
#include "EGameplayMessageMatch.h"
#include "AsyncAction_ListenForGameplayMessage.generated.h"

class UAsyncAction_ListenForGameplayMessage;
class UObject;
class UScriptStruct;

UCLASS(Blueprintable)
class GAMEPLAYMESSAGERUNTIME_API UAsyncAction_ListenForGameplayMessage : public UCancellableAsyncAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncGameplayMessageDelegate OnMessageReceived;
    
    UAsyncAction_ListenForGameplayMessage();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAsyncAction_ListenForGameplayMessage* ListenForGameplayMessages(UObject* WorldContextObject, FGameplayTag Channel, UScriptStruct* PayloadType, EGameplayMessageMatch MatchType);
    
    UFUNCTION(BlueprintCallable)
    bool GetPayload(UPARAM(Ref) int32& OutPayload);
    
};

