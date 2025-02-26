#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_EnterRift.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_EnterRift : public URSTGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InstigatorRift;
    
public:
    URSTGameplayAbility_EnterRift();

};

