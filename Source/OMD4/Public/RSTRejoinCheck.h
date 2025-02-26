#pragma once
#include "CoreMinimal.h"
#include "CommonUserTypes.h"
#include "CommonUserTypes.h"
#include "RejoinCheck.h"
#include "RSTRejoinCheck.generated.h"

class UCommonUserInfo;

UCLASS(Blueprintable)
class OMD4_API URSTRejoinCheck : public URejoinCheck {
    GENERATED_BODY()
public:
    URSTRejoinCheck();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
    
};

