#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTMilestoneSubsystem.generated.h"

class ULocalPlayer;
class URSTMetaThreadDefinition;
class URSTPlayerProfile;

UCLASS(Blueprintable)
class OMD4_API URSTMilestoneSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTMilestoneThreadUnlockDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTMilestoneSkinUnlockDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTMilestoneHeroUnlockDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMilestoneThreadUnlockDelegate OnNewThreadsUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMilestoneHeroUnlockDelegate OnNewHeroesUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMilestoneSkinUnlockDelegate OnNewSkinsUnlocked;
    
    URSTMilestoneSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateMilestones(URSTPlayerProfile* PlayerProfile);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerAdded(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyNewlyUnlockedThreads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyNewlyUnlockedSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyNewlyUnlockedHeroes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumNewlyUnlockedThreads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumNewlyUnlockedSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumNewlyUnlockedHeroes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URSTMetaThreadDefinition*> GetNewlyUnlockedThreads() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetNewlyUnlockedSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetNewlyUnlockedHeroes() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearNewUnlockCache();
    
    UFUNCTION(BlueprintCallable)
    void AcknowledgeNewSkinUnlock(FGameplayTag SkinTag);
    
    UFUNCTION(BlueprintCallable)
    void AcknowledgeNewHeroUnlock(FGameplayTag HeroTag);
    
};

