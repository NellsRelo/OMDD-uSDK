#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_RSTFindStrafeLoc.generated.h"

UCLASS(Blueprintable)
class OMD4_API UBTTask_RSTFindStrafeLoc : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeRange;
    
public:
    UBTTask_RSTFindStrafeLoc();

};

