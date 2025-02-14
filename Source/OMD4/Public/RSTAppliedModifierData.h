#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RSTModifierSpec.h"
#include "RSTAppliedModifierData.generated.h"

USTRUCT(BlueprintType)
struct FRSTAppliedModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTModifierSpec Spec;
    
    OMD4_API FRSTAppliedModifierData();
};

