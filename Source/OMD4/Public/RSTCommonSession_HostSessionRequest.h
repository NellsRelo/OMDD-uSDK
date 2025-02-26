#pragma once
#include "CoreMinimal.h"
#include "CommonSessionSubsystem.h"
#include "RSTCommonSession_HostSessionRequest.generated.h"

class UWorld;

UCLASS(Blueprintable)
class OMD4_API URSTCommonSession_HostSessionRequest : public UCommonSession_HostSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* CurrentWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCurrentWorldURL;
    
    URSTCommonSession_HostSessionRequest();

};

