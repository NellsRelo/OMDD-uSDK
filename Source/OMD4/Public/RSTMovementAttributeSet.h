#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "RSTAttributeSet.h"
#include "RSTMovementAttributeSet.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTMovementAttributeSet : public URSTAttributeSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MovementSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GravityScale, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FallingLateralFriction, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData FallingLateralFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AirControl, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimeDilation, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData TimeDilation;
    
public:
    URSTMovementAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeDilation(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MovementSpeed(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GravityScale(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FallingLateralFriction(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AirControl(const FGameplayAttributeData& OldValue);
    
};

