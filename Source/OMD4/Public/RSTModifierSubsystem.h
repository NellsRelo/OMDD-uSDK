#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ERSTModifierTargetType.h"
#include "RSTModifierSpecArray.h"
#include "RSTModifierSubsystem.generated.h"

class URSTMetaDistortionDefinition;
class URSTMetaTeamThreadDefinition;
class URSTMetaThreadDefinition;
class URSTPotionDefinition;
class URSTUpgradeDefinition;

UCLASS(Blueprintable)
class OMD4_API URSTModifierSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERSTModifierTargetType, FRSTModifierSpecArray> AppliedModifiers;
    
public:
    URSTModifierSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpgradeRemoved(FUniqueNetIdRepl PlayerId, const URSTUpgradeDefinition* Upgrade);
    
    UFUNCTION(BlueprintCallable)
    void OnUpgradeAdded(FUniqueNetIdRepl PlayerId, const URSTUpgradeDefinition* Upgrade);
    
    UFUNCTION(BlueprintCallable)
    void OnThreadRemoved(FUniqueNetIdRepl PlayerId, const URSTMetaThreadDefinition* Thread);
    
    UFUNCTION(BlueprintCallable)
    void OnThreadAdded(FUniqueNetIdRepl PlayerId, const URSTMetaThreadDefinition* Thread);
    
    UFUNCTION(BlueprintCallable)
    void OnTeamThreadRemoved(const URSTMetaTeamThreadDefinition* TeamThread);
    
    UFUNCTION(BlueprintCallable)
    void OnTeamThreadAdded(const URSTMetaTeamThreadDefinition* TeamThread);
    
    UFUNCTION(BlueprintCallable)
    void OnPotionRemoved(FUniqueNetIdRepl PlayerId, const URSTPotionDefinition* Potion);
    
    UFUNCTION(BlueprintCallable)
    void OnPotionAdded(FUniqueNetIdRepl PlayerId, const URSTPotionDefinition* Potion);
    
    UFUNCTION(BlueprintCallable)
    void OnGameReset();
    
    UFUNCTION(BlueprintCallable)
    void OnDistortionRemoved(const URSTMetaDistortionDefinition* Distortion);
    
    UFUNCTION(BlueprintCallable)
    void OnDistortionAdded(const URSTMetaDistortionDefinition* Distortion);
    
};

