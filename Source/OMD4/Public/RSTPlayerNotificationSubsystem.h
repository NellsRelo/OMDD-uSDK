#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RSTPlayerNotificationData.h"
#include "RSTPlayerNotificationPriorityData.h"
#include "RSTPlayerNotificationUserFacingData.h"
#include "RSTPlayerNotificationSubsystem.generated.h"

class ULocalPlayer;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTPlayerNotificationSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTNoMessagesDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPlayerNotificationUserFacingData> QueuedMessages;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTNoMessagesDelegate OnMessageQueueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTPlayerNotificationPriorityData> NotificationPriorityList;
    
    URSTPlayerNotificationSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveLoadingScreenSuspend();
    
    UFUNCTION(BlueprintCallable)
    void PopMessage();
    
    UFUNCTION(BlueprintCallable)
    void EnqueueMessage(const FRSTPlayerNotificationData& PlayerNotificationData);
    
    UFUNCTION(BlueprintCallable)
    void DisplayTopMessage(ULocalPlayer* LocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DisplayTopMessage(ULocalPlayer* LocalPlayer, const FRSTPlayerNotificationUserFacingData& Message);
    
};

