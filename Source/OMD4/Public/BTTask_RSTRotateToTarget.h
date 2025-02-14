#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RSTRotateToTarget.generated.h"

UCLASS(Blueprintable)
class OMD4_API UBTTask_RSTRotateToTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Precision;
    
public:
    UBTTask_RSTRotateToTarget();

};

