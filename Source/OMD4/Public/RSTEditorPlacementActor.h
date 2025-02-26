#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "RSTEditorPlacementActorPostMovedDelegate.h"
#include "RSTEditorPlacementActor.generated.h"

UCLASS(Abstract, Blueprintable)
class OMD4_API ARSTEditorPlacementActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTEditorPlacementActorPostMoved OnActorMoved;
    
    ARSTEditorPlacementActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetIntValue(FGameplayTag Tag, int32 Val);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPropertyChanged();
    
};

