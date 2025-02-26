#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "RSTAttributeSet.h"
#include "RSTRiftAttributeSet.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTRiftAttributeSet : public URSTAttributeSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InfluenceRadius, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData InfluenceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LightningRadius, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LightningRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LightningCooldownMin, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LightningCooldownMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LightningCooldownMax, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LightningCooldownMax;
    
public:
    URSTRiftAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LightningRadius(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LightningCooldownMin(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LightningCooldownMax(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InfluenceRadius(const FGameplayAttributeData& OldValue);
    
};

