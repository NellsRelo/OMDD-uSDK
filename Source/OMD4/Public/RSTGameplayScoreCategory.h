#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayScoreCategory.generated.h"

class URSTGameScoreBase;

USTRUCT(BlueprintType)
struct OMD4_API FRSTGameplayScoreCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URSTGameScoreBase*> GameplayScoreParameters;
    
    FRSTGameplayScoreCategory();
};

