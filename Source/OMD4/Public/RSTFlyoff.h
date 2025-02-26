#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTFlyoff.generated.h"

class USceneComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTFlyoff : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float flyoffLifeSpan;
    
public:
    ARSTFlyoff(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsAvailable(bool isAvailable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeFlyoff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAvailable();
    
    UFUNCTION(BlueprintCallable)
    float GetFlyoffLifeSpan();
    
};

