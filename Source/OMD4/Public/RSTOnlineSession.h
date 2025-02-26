#pragma once
#include "CoreMinimal.h"
#include "CommonUserTypes.h"
#include "GameFramework/OnlineSession.h"
#include "RSTOnlineSession.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTOnlineSession : public UOnlineSession {
    GENERATED_BODY()
public:
    URSTOnlineSession();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRejoinStatusUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnJoinSessionComplete(const FOnlineResultInformation& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroySession();
    
    UFUNCTION(BlueprintCallable)
    void OnCreateSessionComplete(const FOnlineResultInformation& Result);
    
};

