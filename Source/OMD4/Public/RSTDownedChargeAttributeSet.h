#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "RSTAttributeSet.h"
#include "RSTDownedChargeAttributeSet.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTDownedChargeAttributeSet : public URSTAttributeSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DownedCharge, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DownedCharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaxDownedCharge, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MaxDownedCharge;
    
public:
    URSTDownedChargeAttributeSet();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MaxDownedCharge(const FGameplayAttributeData& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DownedCharge(const FGameplayAttributeData& OldValue);
    
};

