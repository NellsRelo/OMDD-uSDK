#pragma once
#include "CoreMinimal.h"
#include "RSTLinkedModifierObjects.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FRSTLinkedModifierObjects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Objects;
    
    OMD4_API FRSTLinkedModifierObjects();
};

