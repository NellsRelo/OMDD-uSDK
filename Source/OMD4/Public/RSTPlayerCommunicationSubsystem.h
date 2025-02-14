#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Subsystems/WorldSubsystem.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateBrush.h"
#include "RSTPingTrackerData.h"
#include "RSTPlayerCommunicationSubsystem.generated.h"

class AActor;
class ARSTPlayerState;
class UCurveFloat;
class URSTCommunicationDefinition;
class URSTIndicatorDescriptor;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class OMD4_API URSTPlayerCommunicationSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRSTLookedAtPingChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTLookedAtPingChangedDelegate OnLookedAtPingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> PlayerIndexToLinearColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SystemPingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DefaultPingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> PingWidgetHAlign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> PingWidgetVAlign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingInteractScanRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> PingInteractWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingCenteredRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPingLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName PingKnownTraceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDopplerPingLifespan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DefaultDopplerPingBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultDopplerAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DefaultDopplerScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDopplerPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultDopplerPulseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingRechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTPingTrackerData> PingTrackerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SearchingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSTIndicatorDescriptor* PingInteractIndicator;
    
public:
    URSTPlayerCommunicationSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemovePing(ARSTPlayerState* Instigator, int32 PingTrackerId, bool bNotifyRemote);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerPing(const FRSTPingTrackerData& PingBeingLookedAt) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPingTrackerFromIndicator(URSTIndicatorDescriptor* Indicator, FRSTPingTrackerData& PingTrackerData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPingLinearColorFromTracker(const FRSTPingTrackerData& PingTrackerData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPingLinearColorFromPlayerState(const ARSTPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPingLinearColorFromPlayerIndex(int32 PlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLookedAtPing(FRSTPingTrackerData& CurrentPing) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSystemCommunication(URSTCommunicationDefinition* CommunicationOption, AActor* AttachedToActor, const FVector& PingPosition, int32& OutPingId);
    
};

