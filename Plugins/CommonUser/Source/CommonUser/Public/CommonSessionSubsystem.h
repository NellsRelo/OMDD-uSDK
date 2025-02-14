#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CommonSessionOnCreateSessionComplete_DynamicDelegate.h"
#include "CommonSessionOnDestroySessionComplete_DynamicDelegate.h"
#include "CommonSessionOnJoinSessionComplete_DynamicDelegate.h"
#include "CommonSessionOnPendingJoinSessionUpdatedDelegate.h"
#include "CommonSessionOnUserRequestedSession_DynamicDelegate.h"
#include "ECommonSessionVisibility.h"
#include "CommonSessionSubsystem.generated.h"

class APlayerController;
class UCommonSession_HostSessionRequest;
class UCommonSession_SearchResult;
class UCommonSession_SearchSessionRequest;

UCLASS(Blueprintable)
class COMMONUSER_API UCommonSessionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSessionOnUserRequestedSession_Dynamic K2_OnUserRequestedSessionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSessionOnJoinSessionComplete_Dynamic K2_OnJoinSessionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSessionOnCreateSessionComplete_Dynamic K2_OnCreateSessionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSessionOnDestroySessionComplete_Dynamic K2_OnDestroySessionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonSessionOnPendingJoinSessionUpdated K2_OnPendingJoinSessionEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonSession_SearchResult* PendingJoinRequest;
    
public:
    UCommonSessionSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetSessionVisibility(ECommonSessionVisibility NewSessionVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossplayEnabled(bool bInCrossplayEnabled);
    
    UFUNCTION(BlueprintCallable)
    void QuickPlaySession(APlayerController* JoiningOrHostingPlayer, UCommonSession_HostSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    static void ParseSearchResult(const TArray<UCommonSession_SearchResult*>& InSearchResults, bool bCanUserCrossPlay, const FText& SearchText, TArray<UCommonSession_SearchResult*>& OutSearchResults);
    
    UFUNCTION(BlueprintCallable)
    void JoinSession(APlayerController* JoiningPlayer, UCommonSession_SearchResult* Request);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJoiningSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSession() const;
    
    UFUNCTION(BlueprintCallable)
    void HostSession(APlayerController* HostingPlayer, UCommonSession_HostSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommonSessionVisibility GetSessionVibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCrossplayPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCrossplayEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void FindSessions(APlayerController* SearchingPlayer, UCommonSession_SearchSessionRequest* Request);
    
    UFUNCTION(BlueprintCallable)
    UCommonSession_SearchSessionRequest* CreateOnlineSearchSessionRequest();
    
    UFUNCTION(BlueprintCallable)
    UCommonSession_HostSessionRequest* CreateOnlineHostSessionRequest();
    
    UFUNCTION(BlueprintCallable)
    void CleanUpSessions();
    
    UFUNCTION(BlueprintCallable)
    void CancelFindSessions();
    
};

