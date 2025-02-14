#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "RSTAIAttachment.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTAIAttachment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RiftLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInteractable;
    
public:
    ARSTAIAttachment(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetFXMesh() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_SpawnedFromRiftFX();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_DestroyFX(float LifeSpan, uint8 deathType, const FGameplayTag& animationTag);
    
};

