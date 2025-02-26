#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "RSTDirectModifierData.generated.h"

class URSTModifierBase;

USTRUCT(BlueprintType)
struct FRSTDirectModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTModifierBase* modifier;
    
    OMD4_API FRSTDirectModifierData();
};

