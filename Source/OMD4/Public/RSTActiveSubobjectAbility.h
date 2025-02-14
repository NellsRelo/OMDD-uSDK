#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RSTActiveSubobjectAbility.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FRSTActiveSubobjectAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> Ability;
    
    OMD4_API FRSTActiveSubobjectAbility();
};

