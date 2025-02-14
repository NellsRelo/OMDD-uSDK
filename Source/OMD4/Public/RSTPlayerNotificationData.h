#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPlayerNotificationData.generated.h"

USTRUCT(BlueprintType)
struct FRSTPlayerNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MessageTag;
    
    OMD4_API FRSTPlayerNotificationData();
};

