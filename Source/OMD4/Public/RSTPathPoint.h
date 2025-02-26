#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "ERSTPathPointType.h"
#include "RSTPathPoint.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTPathPoint : public ATargetPoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTPathPointType PathPointType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdvanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExitPoint;
    
public:
    ARSTPathPoint(const FObjectInitializer& ObjectInitializer);

};

