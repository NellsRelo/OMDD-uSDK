#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RSTGameplayTagStack.h"
#include "RSTGameplayTagStackContainer.generated.h"

USTRUCT(BlueprintType)
struct FRSTGameplayTagStackContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTGameplayTagStack> Stacks;
    
public:
    OMD4_API FRSTGameplayTagStackContainer();
};

