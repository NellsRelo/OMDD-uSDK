#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTGameplayMessageData_TrapPlacedOrDestroyed.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD4_API FRSTGameplayMessageData_TrapPlacedOrDestroyed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TrapOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrapTags;
    
    FRSTGameplayMessageData_TrapPlacedOrDestroyed();
};

