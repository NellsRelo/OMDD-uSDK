#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTAnimLayerHandle.h"
#include "Templates/SubclassOf.h"
#include "RSTAnimLayerManagerComponent.generated.h"

class AActor;
class UAnimInstance;
class URSTAnimLayerManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTAnimLayerManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimInstance> CachedAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FRSTAnimLayerHandle, TSubclassOf<UAnimInstance>> LinkedAnimLayers;
    
public:
    URSTAnimLayerManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URSTAnimLayerManagerComponent* FindAnimLayerManagerComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    FRSTAnimLayerHandle AddAnimLayer(TSubclassOf<UAnimInstance> LayerClass);
    
};

