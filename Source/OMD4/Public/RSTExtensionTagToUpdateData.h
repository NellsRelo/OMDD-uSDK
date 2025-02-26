#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTExtensionTagToUpdateData.generated.h"

USTRUCT(BlueprintType)
struct FRSTExtensionTagToUpdateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Upgrades;
    
    OMD4_API FRSTExtensionTagToUpdateData();
};

