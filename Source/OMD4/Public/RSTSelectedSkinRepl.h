#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTSelectedSkinRepl.generated.h"

USTRUCT(BlueprintType)
struct FRSTSelectedSkinRepl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HeroTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SkinTag;
    
    OMD4_API FRSTSelectedSkinRepl();
};

