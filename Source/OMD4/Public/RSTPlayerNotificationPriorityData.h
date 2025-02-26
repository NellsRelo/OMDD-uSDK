#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTPlayerNotificationUserFacingData.h"
#include "RSTPlayerNotificationPriorityData.generated.h"

USTRUCT(BlueprintType)
struct FRSTPlayerNotificationPriorityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SharedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPlayerNotificationUserFacingData> TagUserFacingDataList;
    
    OMD4_API FRSTPlayerNotificationPriorityData();
};

