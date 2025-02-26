#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "RSTCorruptedTrapGridsVolume.generated.h"

class ARSTCorruptedTrapGridDecorator;
class UDynamicMeshComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTCorruptedTrapGridsVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSTCorruptedTrapGridDecorator*> DecoratorActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEnabled, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
public:
    ARSTCorruptedTrapGridsVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RegenerateVisuals();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEnabled();
    
};

