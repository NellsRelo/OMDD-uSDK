#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTStatSubsystem.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTStatSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URSTStatSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetStatIntAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStatInt(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStatFloatAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStatFloat(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue);
    
    UFUNCTION(BlueprintCallable)
    void MaxStatIntAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void MaxStatInt(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void MaxStatFloatAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue);
    
    UFUNCTION(BlueprintCallable)
    void MaxStatFloat(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue);
    
    UFUNCTION(BlueprintCallable)
    void IncrementStatIntAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void IncrementStatInt(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, int32 StatValue);
    
    UFUNCTION(BlueprintCallable)
    void IncrementStatFloatAll(FGameplayTag GameplayTag, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue);
    
    UFUNCTION(BlueprintCallable)
    void IncrementStatFloat(FGameplayTag GameplayTag, int32 PlayerIndex, const TArray<FGameplayTag>& AdditionalIdentifiers, float StatValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStatInt(FGameplayTag GameplayTag, int32 PlayerIndex, FGameplayTag AdditionalIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatFloat(FGameplayTag GameplayTag, int32 PlayerIndex, FGameplayTag AdditionalIdentifier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSubstats(FGameplayTag GameplayTag, int32 PlayerIndex, FGameplayTagContainer RootFilters) const;
    
};

