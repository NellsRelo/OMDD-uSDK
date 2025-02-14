#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTInheritableGameplayTagPropertyMap.h"
#include "RSTPropertyModifiable.h"
#include "RSTOnslaughtCoordinatorComponent.generated.h"

class ARSTGameStateBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTOnslaughtCoordinatorComponent : public UActorComponent, public IRSTPropertyModifiable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTInheritableGameplayTagPropertyMap PropertyMappings;
    
    URSTOnslaughtCoordinatorComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnProcessInitialGameState(ARSTGameStateBase* GameState);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeRifts();
    

    // Fix for true pure virtual functions not being implemented
};

