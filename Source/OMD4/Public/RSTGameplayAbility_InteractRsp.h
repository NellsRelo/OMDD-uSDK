#pragma once
#include "CoreMinimal.h"
#include "RSTGameplayAbility.h"
#include "RSTGameplayAbility_InteractRsp.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable)
class OMD4_API URSTGameplayAbility_InteractRsp : public URSTGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ResponseMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResponseDuration;
    
public:
    URSTGameplayAbility_InteractRsp();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayResponseDialog(AActor* InstigatorActor, bool bExitingInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResponseDuration();
    
};

