#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTHitFlashComponent.generated.h"

class AActor;
class UCurveFloat;
class URSTHitFlashComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTHitFlashComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitFlashDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitFlashTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* HitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEndOnEvaluatedZero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitFlashParameterName;
    
    URSTHitFlashComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerHitFlash();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMeshesChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTHitFlashComponent* FindHitFlashComponent(const AActor* Actor);
    
};

