#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTStatusTagToGameplayCues.generated.h"

USTRUCT(BlueprintType)
struct FRSTStatusTagToGameplayCues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VFXTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GameplayCueTags;
    
    OMD4_API FRSTStatusTagToGameplayCues();
};

