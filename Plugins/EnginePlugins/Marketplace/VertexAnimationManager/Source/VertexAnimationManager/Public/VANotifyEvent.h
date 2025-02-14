#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "ENotifyEventType.h"
#include "VANotifyEvent.generated.h"

class UAnimNotify;
class UAnimNotifyState;
class UVANotifyHandler;

USTRUCT(BlueprintType)
struct VERTEXANIMATIONMANAGER_API FVANotifyEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENotifyEventType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle BeginTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle EndTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVANotifyHandler* NotifyHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimNotify* AnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimNotifyState* AnimNotifyState;
    
    FVANotifyEvent();
};

