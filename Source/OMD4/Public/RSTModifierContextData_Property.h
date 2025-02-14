#pragma once
#include "CoreMinimal.h"
#include "RSTModifierContextData.h"
#include "RSTPropertyModifierOperationContext.h"
#include "RSTModifierContextData_Property.generated.h"

USTRUCT(BlueprintType)
struct FRSTModifierContextData_Property : public FRSTModifierContextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPropertyModifierOperationContext> OperationContexts;
    
    OMD4_API FRSTModifierContextData_Property();
};

