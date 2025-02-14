#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RSTAchievementHelpers.generated.h"

class URSTPlayerProfile;

UCLASS(Blueprintable)
class OMD4_API URSTAchievementHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URSTAchievementHelpers();

    UFUNCTION(BlueprintCallable)
    static bool HasFullyUpgradedTrap(const URSTPlayerProfile* PlayerProfile, int32 MaxLevel);
    
    UFUNCTION(BlueprintCallable)
    static void GetSkillTreeUpgrades(FGameplayTagContainer& OutTags);
    
    UFUNCTION(BlueprintCallable)
    static void GetPurchaseableThreadIdentifiers(FGameplayTagContainer& OutTags);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumPurchasedTraps(const URSTPlayerProfile* PlayerProfile);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumPurchasedThreads(const URSTPlayerProfile* PlayerProfile);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumMilestoneUnlockedThreads(const URSTPlayerProfile* PlayerProfile);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllThreadMilestones(FGameplayTagContainer& OutTags);
    
};

