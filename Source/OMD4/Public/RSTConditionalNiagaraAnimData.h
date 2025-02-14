#pragma once
#include "CoreMinimal.h"
#include "RSTConditionalNiagaraEntry.h"
#include "RSTConditionalNiagaraAnimData.generated.h"

USTRUCT(BlueprintType)
struct FRSTConditionalNiagaraAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTConditionalNiagaraEntry> ConditionalTemplates;
    
    OMD4_API FRSTConditionalNiagaraAnimData();
};

