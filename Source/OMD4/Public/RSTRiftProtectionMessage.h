#pragma once
#include "CoreMinimal.h"
#include "ERSTRiftPointLossReason.h"
#include "RSTRiftProtectionMessage.generated.h"

USTRUCT(BlueprintType)
struct FRSTRiftProtectionMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERSTRiftPointLossReason> ProtectionReasons;
    
    OMD4_API FRSTRiftProtectionMessage();
};

