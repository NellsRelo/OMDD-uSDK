#pragma once
#include "CoreMinimal.h"
#include "RSTDeathEvent.h"
#include "RSTDeathEvent_Downed.generated.h"

class AActor;

UCLASS(Blueprintable)
class OMD4_API URSTDeathEvent_Downed : public URSTDeathEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    URSTDeathEvent_Downed();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

