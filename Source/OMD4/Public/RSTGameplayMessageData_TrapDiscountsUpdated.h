#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayMessageData_TrapDiscountsUpdated.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OMD4_API FRSTGameplayMessageData_TrapDiscountsUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerController;
    
    FRSTGameplayMessageData_TrapDiscountsUpdated();
};

