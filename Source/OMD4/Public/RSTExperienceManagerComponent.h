#pragma once
#include "CoreMinimal.h"
#include "LoadingProcessInterface.h"
#include "Components/GameStateComponent.h"
#include "RSTExperienceManagerComponent.generated.h"

class URSTExperienceDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTExperienceManagerComponent : public UGameStateComponent, public ILoadingProcessInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentExperience, meta=(AllowPrivateAccess=true))
    URSTExperienceDefinition* CurrentExperience;
    
public:
    URSTExperienceManagerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentExperience();
    

    // Fix for true pure virtual functions not being implemented
};

