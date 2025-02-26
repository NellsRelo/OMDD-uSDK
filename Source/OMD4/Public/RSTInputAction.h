#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTInputAction.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FRSTInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InputTag;
    
    OMD4_API FRSTInputAction();
};

