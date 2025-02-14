#pragma once
#include "CoreMinimal.h"
#include "RSTVoiceChatDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct FRSTVoiceChatDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    OMD4_API FRSTVoiceChatDeviceInfo();
};

