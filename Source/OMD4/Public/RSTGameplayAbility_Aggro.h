#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_Aggro.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_Aggro : public URSTGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SpawnMontage;
    
    URSTGameplayAbility_Aggro();

};

