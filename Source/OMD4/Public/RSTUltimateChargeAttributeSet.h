#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "RSTAttributeSet.h"
#include "RSTUltimateChargeAttributeSet.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTUltimateChargeAttributeSet : public URSTAttributeSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UltimateCharge, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData UltimateCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData UltimateChargePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxUltimateCharge, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxUltimateCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData UltimatePotionStrength;
    
public:
    URSTUltimateChargeAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UltimateCharge(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxUltimateCharge(const FGameplayAttributeData& OldValue);
    
};

