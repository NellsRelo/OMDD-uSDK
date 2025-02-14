#pragma once
#include "CoreMinimal.h"
#include "RSTGameStateComponent.h"
#include "RSTCrystalDefenseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTCrystalDefenseComponent : public URSTGameStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRSTCrystalDefenseHealthUpdated, float, NewRemaining, float, RemainingRatio, float, DamageTaken, float, DamageRatio);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTCrystalDefenseHealthUpdated OnRiftHealthUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AccumulatedDamage, meta=(AllowPrivateAccess=true))
    float AccumulatedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HealthPerRiftPoint, meta=(AllowPrivateAccess=true))
    float HealthPerRiftPoint;
    
public:
    URSTCrystalDefenseComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthPerRiftPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccumulatedDamage();
    
};

