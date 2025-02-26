#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "RSTGameplayTagStack.generated.h"

USTRUCT(BlueprintType)
struct FRSTGameplayTagStack : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
public:
    OMD4_API FRSTGameplayTagStack();
};

