#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTSavedSubStatEntry.h"
#include "RSTSavedStatEntry.generated.h"

USTRUCT(BlueprintType)
struct OMD4_API FRSTSavedStatEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTSavedSubStatEntry> SubStats;
    
    FRSTSavedStatEntry();
};

