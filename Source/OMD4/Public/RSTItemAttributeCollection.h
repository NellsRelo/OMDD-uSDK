#pragma once
#include "CoreMinimal.h"
#include "RSTItemAttributeCollection.generated.h"

class URSTItemAttribute;

USTRUCT(BlueprintType)
struct OMD4_API FRSTItemAttributeCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTItemAttribute*> Attributes;
    
    FRSTItemAttributeCollection();
};

