#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTConditionalNiagaraEntry.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FRSTConditionalNiagaraEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* System;
    
    OMD4_API FRSTConditionalNiagaraEntry();
};

