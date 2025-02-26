#pragma once
#include "CoreMinimal.h"
#include "RSTAppliedPropertyContext.h"
#include "RSTPropertyModifierOperationContext.generated.h"

class URSTPropertyCustomOperation;
class URSTPropertyModifierCustomValueGetter;
class URSTPropertyOperationValidityCheck;

USTRUCT(BlueprintType)
struct FRSTPropertyModifierOperationContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPropertyOperationValidityCheck* ValidityCheckObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValueGetter* CustomValueObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation* CustomOperationObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTAppliedPropertyContext PropertyContext;
    
    OMD4_API FRSTPropertyModifierOperationContext();
};

