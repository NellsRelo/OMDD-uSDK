#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RSTSettingsStringOption.h"
#include "RSTSettingStringOptionHelpers.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTSettingStringOptionHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTSettingStringOptionHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUIStrings(const TArray<FRSTSettingsStringOption>& Options, TArray<FString>& OutStrings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUIString(const TArray<FRSTSettingsStringOption>& Options, int32 BackingValue, FText& OutUIText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetText(const FRSTSettingsStringOption& Option);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetBackingValue(const TArray<FRSTSettingsStringOption>& Options, const FString& UISelectedOption, int32& BackingValue);
    
};

