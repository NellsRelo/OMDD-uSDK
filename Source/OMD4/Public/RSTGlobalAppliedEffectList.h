#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "RSTGlobalAppliedEffectList.generated.h"

class URSTAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FRSTGlobalAppliedEffectList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URSTAbilitySystemComponent*, FActiveGameplayEffectHandle> Handles;
    
    OMD4_API FRSTGlobalAppliedEffectList();
};

