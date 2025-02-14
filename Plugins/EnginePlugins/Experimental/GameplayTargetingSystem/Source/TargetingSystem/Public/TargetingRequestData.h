#pragma once
#include "CoreMinimal.h"
#include "TargetingRequestDynamicDelegateDelegate.h"
#include "TargetingRequestData.generated.h"

USTRUCT(BlueprintType)
struct FTargetingRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetingRequestDynamicDelegate TargetingRequestDynamicDelegate;
    
    TARGETINGSYSTEM_API FTargetingRequestData();
};

