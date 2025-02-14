#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTMeleeAdvanceDestination.generated.h"

UCLASS(Blueprintable)
class OMD4_API ARSTMeleeAdvanceDestination : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    ARSTMeleeAdvanceDestination(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* InTarget, float InTargetDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(float InMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxDistance(float InMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetGroundDistanceEnabled(bool bEnabled, float HalfHeight);
    
};

