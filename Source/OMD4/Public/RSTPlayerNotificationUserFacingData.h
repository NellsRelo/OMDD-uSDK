#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPlayerNotificationUserFacingData.generated.h"

USTRUCT(BlueprintType)
struct FRSTPlayerNotificationUserFacingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageDescription;
    
    OMD4_API FRSTPlayerNotificationUserFacingData();
};

