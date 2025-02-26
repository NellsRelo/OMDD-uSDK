#pragma once
#include "CoreMinimal.h"
#include "CommonGameInstance.h"
#include "CommonSessionSubsystem.h"
#include "CommonUserTypes.h"
#include "GameplayTagContainer.h"
#include "RSTGameInstance.generated.h"

class AGameStateBase;
class APlayerController;
class URSTCommonSession_HostSessionRequest;
class URSTRejoinCheck;
class URSTUserFacingExperienceDef;
class URVoiceManager;

UCLASS(Blueprintable, NonTransient)
class OMD4_API URSTGameInstance : public UCommonGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTOnRejoinStatusUpdated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTGameStateSetDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTRejoinCheck* RejoinCheck;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTOnRejoinStatusUpdated OnRejoinStatusUpdatedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PasswordSalt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WhiteListedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BlackListedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTUserFacingExperienceDef* SelectedExperience;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTGameStateSetDelegate OnGameStateSetDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVoiceManager* VoiceManager;
    
public:
    // URSTGameInstance();

    UFUNCTION(BlueprintCallable)
    void SetHasShownStartupVideo(bool bShown);
    
    UFUNCTION(BlueprintCallable)
    void RejoinLastSession(bool bRecordRejoin);
    
    UFUNCTION(BlueprintCallable)
    void RecreateSession(const FGameplayTag& MessageTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnJoinSessionComplete(const FOnlineResultInformation& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AGameStateBase* GameState);
    
    UFUNCTION(BlueprintCallable)
    void OnCreateSessionComplete(const FOnlineResultInformation& Result);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinRequestedSessionWithPassword(const FString& Password);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRejoinPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasShownStartupVideo() const;
    
    UFUNCTION(BlueprintCallable)
    URSTCommonSession_HostSessionRequest* CreateHostingRequest(APlayerController* HostingPlayer, ECommonSessionOnlineMode OnlineMode, bool bCanUseCrossplay);
    
    UFUNCTION(BlueprintCallable)
    void CheckRejoinStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRejoinLastSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RequestPasswordForSession();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInvalidPassword();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EndGame();
    
    UFUNCTION(BlueprintCallable)
    void AbandonRejoin(bool bRecordAbandon);
    
};

