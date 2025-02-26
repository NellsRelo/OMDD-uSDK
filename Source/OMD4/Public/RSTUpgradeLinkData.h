#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTUpgradeLinkData.generated.h"

USTRUCT(BlueprintType)
struct FRSTUpgradeLinkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Value;
    
    OMD4_API FRSTUpgradeLinkData();
};

