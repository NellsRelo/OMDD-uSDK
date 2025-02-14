#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RSTAnimInstancePostProcess.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Game)
class OMD4_API URSTAnimInstancePostProcess : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDead;
    
public:
    URSTAnimInstancePostProcess();

};

