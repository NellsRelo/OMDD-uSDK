#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PreEnemyEnterRiftDelegate.h"
#include "RSTOnslaughtCoordinatorComponent.h"
#include "RSTOnslaughtComponentRiftDefense.generated.h"

class AActor;
class ARSTRift;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTOnslaughtComponentRiftDefense : public URSTOnslaughtCoordinatorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RiftPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPreEnemyEnterRift> RiftEntryHandlers;
    
public:
    URSTOnslaughtComponentRiftDefense(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterPreEnemyEnterRift(FPreEnemyEnterRift Callback);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRiftEntered(ARSTRift* Rift, AActor* Actor, FVector RiftLocation);
    
};

