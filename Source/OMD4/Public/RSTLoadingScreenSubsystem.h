#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadingScreenWidgetChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "RSTLoadingScreenSubsystem.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class OMD4_API URSTLoadingScreenSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTLoadingScreenStatusChanged, bool, bIsShowing);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTLoadingScreenStatusChanged OnLoadingScreenStatusChangedDelegate;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenWidgetChangedDelegate OnLoadingScreenWidgetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> LoadingScreenWidgetClass;
    
public:
    URSTLoadingScreenSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenContentWidget(TSubclassOf<UUserWidget> NewWidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UUserWidget> GetLoadingScreenContentWidget() const;
    
};

