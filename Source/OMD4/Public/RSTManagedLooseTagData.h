#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTManagedLooseTagData.generated.h"

USTRUCT(BlueprintType)
struct FRSTManagedLooseTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    OMD4_API FRSTManagedLooseTagData();
};

