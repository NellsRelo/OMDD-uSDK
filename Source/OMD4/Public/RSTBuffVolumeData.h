#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTBuffVolumeElement_BlueprintEvent.h"
#include "RSTBuffVolumeElement_GameplayEffect.h"
#include "RSTBuffVolumeData.generated.h"

USTRUCT(BlueprintType)
struct FRSTBuffVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAggregateParents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTBuffVolumeElement_GameplayEffect> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTBuffVolumeElement_BlueprintEvent> Events;
    
    OMD4_API FRSTBuffVolumeData();
};

