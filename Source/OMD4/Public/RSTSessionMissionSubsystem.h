#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ERSTMissionChosenResult.h"
#include "RSTNPEMissionOptions.h"
#include "RSTTeamThreadData.h"
#include "RSTThreadOption.h"
#include "RSTSessionMissionSubsystem.generated.h"

class APlayerState;
class ARSTPlayerController;
class ARSTPlayerState;
class URSTMetaDistortionDefinition;
class URSTMetaTeamThreadDefinition;
class URSTMetaThreadDefinition;
class URSTMissionDefinition;
class URSTPlayerProfile;
class URSTPotionDefinition;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTSessionMissionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRSTThreadChange, FUniqueNetIdRepl, PlayerId, const URSTMetaThreadDefinition*, Thread, bool, bFromQuicksave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTTeamThreadChange, const URSTMetaTeamThreadDefinition*, Thread, bool, bFromQuicksave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTPotionChangePlayer, FUniqueNetIdRepl, PlayerId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRSTPotionChange, FUniqueNetIdRepl, PlayerId, const URSTPotionDefinition*, Potion, bool, bFromQuicksave);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTMissionSelectedChange, const URSTMissionDefinition*, PreviousMission, const URSTMissionDefinition*, CurrentMission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTMissionChange, const URSTMissionDefinition*, Mission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRSTDistortionChange, const URSTMetaDistortionDefinition*, Distortion, bool, bFromQuicksave);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGameplayTagQuery> MissionProgressionTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTNPEMissionOptions> MissionNPEOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMissionDefinition*> ValidMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTThreadOption> CurrentThreadChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMetaDistortionDefinition*> ValidDistortions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValidMissions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMissionChange OnMissionAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMissionChange OnMissionRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTMissionSelectedChange OnMissionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTDistortionChange OnDistortionAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTDistortionChange OnDistortionRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTThreadChange OnThreadAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTThreadChange OnThreadRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPotionChange OnPotionAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPotionChange OnPotionRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTPotionChangePlayer OnPotionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTeamThreadChange OnTeamThreadAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTeamThreadChange OnTeamThreadRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMetaDistortionDefinition*> SelectedDistortions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTTeamThreadData> SelectedTeamThreads;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMissionDefinition*> SelectedMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URSTMetaThreadDefinition*> SelectedThreads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllPlayerGameplayTagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LocalPlayerGameplayTagContainer;
    
public:
    URSTSessionMissionSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetCurrentThreadIndex(int32 InThreadIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSeed(int32 InSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URSTMetaThreadDefinition*> GetSelectedThreads(ARSTPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRSTTeamThreadData> GetSelectedTeamThreadData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    URSTPotionDefinition* GetSelectedPotion(APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URSTMissionDefinition* GetSelectedMission(int32 missionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URSTMetaThreadDefinition*> GetRecentlySelectedThreads(ARSTPlayerState* PlayerState, int32 NumThreads) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNPEMissionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentThreadIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMissionIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetAllPlayerGameplayTagContainer() const;
    
    UFUNCTION(BlueprintCallable)
    void ChooseThread(ARSTPlayerController* SelectingPlayerController, const URSTMetaThreadDefinition* ThreadDefinition);
    
    UFUNCTION(BlueprintCallable)
    void ChoosePotion(ARSTPlayerController* SelectingPlayerController, const URSTPotionDefinition* PotionDefinition);
    
    UFUNCTION(BlueprintCallable)
    ERSTMissionChosenResult ChooseMissionByIndex(ARSTPlayerController* SelectingPlayerController, int32 ChosenMissionIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BP_GetMissionNPEIndex(URSTPlayerProfile* Profile) const;
    
};

