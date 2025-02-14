#pragma once
#include "CoreMinimal.h"
#include "RSTSavedPlayerIndex.generated.h"

USTRUCT(BlueprintType)
struct FRSTSavedPlayerIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocal;
    
    OMD4_API FRSTSavedPlayerIndex();
};

