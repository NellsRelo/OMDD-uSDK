#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTStatBlueprintLibrary.generated.h"

class URSTPlayerProfile;

UCLASS(Blueprintable)
class OMD4_API URSTStatBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTStatBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool GetStatValue(const URSTPlayerProfile* Profile, FGameplayTag StatTag, FGameplayTagContainer IncludeSubtags, FGameplayTagContainer IgnoreSubtags, int32& OutVal);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMaxStatValue(const URSTPlayerProfile* Profile, FGameplayTag StatTag, FGameplayTagContainer IncludeSubtags, FGameplayTagContainer IgnoreSubtags, int32& OutVal, FGameplayTagContainer& OutMaxSubtags);
    
};

