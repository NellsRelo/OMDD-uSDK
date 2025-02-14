#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTAppliedPropertyContext.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FRSTAppliedPropertyContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    OMD4_API FRSTAppliedPropertyContext();
};

