#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RSTRecoilData.h"
#include "RSTRecoilComponent.generated.h"

class AActor;
class URSTRecoilComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTRecoilComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRecoilData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRSTRecoilData CurrentRecoilData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RecoilTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator CumulativeAimAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator InitialAimRotation;
    
public:
    URSTRecoilComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopRecoil(bool bSnapToOriginalAim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTRecoilComponent* FindRecoilComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ApplyRecoil(FRSTRecoilData RecoilData);
    
};

