#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/GameFrameworkComponentDelegates.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/PawnComponent.h"
#include "RSTInputMappingContextAndPriority.h"
#include "Templates/SubclassOf.h"
#include "RSTHeroComponent.generated.h"

class AActor;
class URSTCameraMode;
class URSTHeroComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTHeroComponent : public UPawnComponent, public IGameFrameworkInitStateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTInputMappingContextAndPriority> DefaultInputMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSTCameraMode> AbilityCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URSTCameraMode> OverrideCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLookYawRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLookPitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookYawScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookPitchScale;
    
public:
    URSTHeroComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLookScale(float YawScale, float PitchScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTHeroComponent* FindHeroComponent(const AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool UnregisterInitStateDelegate(FActorInitStateChangedBPDelegate Delegate) override PURE_VIRTUAL(UnregisterInitStateDelegate, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterAndCallForInitStateChange(FGameplayTag RequiredState, FActorInitStateChangedBPDelegate Delegate, bool bCallImmediately) override PURE_VIRTUAL(RegisterAndCallForInitStateChange, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasReachedInitState(FGameplayTag DesiredState) const override PURE_VIRTUAL(HasReachedInitState, return false;);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetInitState() const override PURE_VIRTUAL(GetInitState, return FGameplayTag{};);
    
    UFUNCTION(BlueprintCallable)
    FName GetFeatureName() const override PURE_VIRTUAL(GetFeatureName, return NAME_None;);
    
};

