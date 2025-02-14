#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SubStatValue.h"
#include "PlayerSpecificSubStatData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSpecificSubStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSubStatValue> SubStats;
    
    OMD4_API FPlayerSpecificSubStatData();
};

