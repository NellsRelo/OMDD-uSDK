#pragma once
#include "CoreMinimal.h"
#include "RSTGameStateComponent.h"
#include "RSTTeleportingRiftComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTTeleportingRiftComponent : public URSTGameStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTTeleportingRiftDelegate, AActor*, SelectedRift);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTTeleportingRiftDelegate OnSelectedRiftChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedRift, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SelectedRift;
    
public:
    URSTTeleportingRiftComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSelectedRift(AActor* InSelectedRift);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedRift();
    
};

