#pragma once
#include "CoreMinimal.h"
#include "RSTPerPlayerThreadList.generated.h"

class URSTMetaThreadDefinition;

USTRUCT(BlueprintType)
struct OMD4_API FRSTPerPlayerThreadList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMetaThreadDefinition*> Threads;
    
    FRSTPerPlayerThreadList();
};

