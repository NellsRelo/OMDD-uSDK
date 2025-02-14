#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RSTSavedRun.h"
#include "RSTSavedRunFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTSavedRunFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTSavedRunFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunValid(const FRSTSavedRun& SavedRun);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetStatValue(const FRSTSavedRun& SavedRun, int32 PlayerIndex, const FGameplayTag& StatTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumSkullsEarned(const FRSTSavedRun& SavedRun);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumPlayers(const FRSTSavedRun& SavedRun);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumMissionsCompleted(const FRSTSavedRun& SavedRun);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetDisplayIndexOrder(const FRSTSavedRun& SavedRun);
    
};

