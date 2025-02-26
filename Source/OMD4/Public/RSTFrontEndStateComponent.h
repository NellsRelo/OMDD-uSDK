#pragma once
#include "CoreMinimal.h"
#include "LoadingProcessInterface.h"
#include "CommonUserTypes.h"
#include "CommonUserTypes.h"
#include "RSTGameStateComponent.h"
#include "RSTFrontEndStateComponent.generated.h"

class UCommonActivatableWidget;
class UCommonUserInfo;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTFrontEndStateComponent : public URSTGameStateComponent, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> RobotLogoScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> PressStartScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> MainScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> AnalyticsModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonActivatableWidget> RegionModalClass;
    
public:
    URSTFrontEndStateComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUserInitialized(const UCommonUserInfo* UserInfo, bool bSuccess, FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext);
    

    // Fix for true pure virtual functions not being implemented
};

