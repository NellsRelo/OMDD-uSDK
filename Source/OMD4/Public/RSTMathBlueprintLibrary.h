#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "RSTFloatRange.h"
#include "RSTInt32Range.h"
#include "RSTMathBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTMathBlueprintLibrary : public UKismetMathLibrary {
    GENERATED_BODY()
public:
    URSTMathBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandRange_Int(const FRSTInt32Range& Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandRange_Float(const FRSTFloatRange& Range);
    
    UFUNCTION(BlueprintCallable)
    static FRotator CreateDirectionRotator(FRotator InRotation);
    
};

