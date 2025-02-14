#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RSTAnalyticsSubsystem.generated.h"

UCLASS(Blueprintable, Config=Game)
class OMD4_API URSTAnalyticsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRecordAnalytics;
    
public:
    URSTAnalyticsSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopAnalyticsSession();
    
    UFUNCTION(BlueprintCallable)
    void StartAnalyticsSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllowedToCollectAnalytics() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsentChanged(bool bIsConsentGranted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnalyticsSupported() const;
    
};

