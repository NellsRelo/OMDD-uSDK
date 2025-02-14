#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTActorOpacityHandle.h"
#include "RSTActorOpacityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTActorOpacityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityAdjustRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpacityMaterialParameterName;
    
    URSTActorOpacityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetOpacity(UPARAM(Ref) FRSTActorOpacityHandle& InOutOperationHandle, float InOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentOpacity(UPARAM(Ref) FRSTActorOpacityHandle& InOutOperationHandle, float InOpacity);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMeshesChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearOpacityTarget(UPARAM(Ref) FRSTActorOpacityHandle& InOutOperationHandle, bool bInstant);
    
};

