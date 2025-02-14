#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RSTExtensionTagToUpdateData.h"
#include "RSTSelectedUpgradeData.h"
#include "RSTUpgradeLinkData.h"
#include "RSTUpgradeTreeNode.h"
#include "RSTUpgradeSubsystem.generated.h"

class APlayerState;
class ARSTPlayerController;
class ARSTPlayerState;
class UCurveFloat;
class URSTUpgradeDefinition;
class URSTUpgradeUserFacingData;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTUpgradeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTUpgradeChange, FUniqueNetIdRepl, PlayerId, const URSTUpgradeDefinition*, Upgrade);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URSTUpgradeDefinition*> UpgradeTreeRoots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<URSTUpgradeDefinition*, FRSTUpgradeTreeNode> UpgradeNodes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTUpgradeChange OnUpgradeAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTUpgradeChange OnUpgradeRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTUpgradeChange OnActiveUpgradeAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTUpgradeChange OnActiveUpgradeRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FRSTSelectedUpgradeData> SelectedUpgradesByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FRSTSelectedUpgradeData> ActiveUpgradesByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRSTExtensionTagToUpdateData> ExtensionTagToUpgradesMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SkullCostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ConnectedUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTUpgradeLinkData> UpgradeLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RootNodes;
    
public:
    URSTUpgradeSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(const URSTUpgradeDefinition* SelectedUpgrade) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeUpgrades(const ARSTPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpgradesForQuery(const FGameplayTagQuery& UpgradeQuery) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeCountForPlayer(APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnlockTier(const URSTUpgradeUserFacingData* SelectedUpgrade, int32& CurrentLevel, int32& MaxLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkullCost(const URSTUpgradeDefinition* ChosenUpgrade) const;
    
    UFUNCTION(BlueprintCallable)
    void ChooseUpgrade(ARSTPlayerController* SelectingPlayerController, const URSTUpgradeDefinition* ChosenUpgrade);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeUnlocked(const URSTUpgradeDefinition* SelectedUpgrade) const;
    
};

