#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "VAISMControllerAbstract.generated.h"

class UInstancedStaticMeshComponent;
class UVAInstancedManager;
class UVARuntimeComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VERTEXANIMATIONMANAGER_API UVAISMControllerAbstract : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RuntimeComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVARuntimeComponent> RuntimeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVAInstancedManager* InstancedManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariationName;
    
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 InstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAdditionalCustomDataFloats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBatchUpdateTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVelocity;
    
    UVAISMControllerAbstract(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateInstanceTransformDeferred(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInstanceTransform(const FTransform& InTransform, bool bMarkRenderStateDirty);
    
    UFUNCTION(BlueprintCallable)
    void SetVariationByName(FName Variation);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeComponent(UVARuntimeComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetInstancedComponent(UInstancedStaticMeshComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDataValue(int32 CustomDataIndex, float CustomDataValue, bool bMarkRenderStateDirty);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomData(const TArray<float>& InCustomData, bool bMarkRenderStateDirty);
    
    UFUNCTION(BlueprintCallable)
    UInstancedStaticMeshComponent* NewInstancedComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetVariationNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetRuntimeComponentNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVARuntimeComponent* GetRuntimeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInstancedStaticMeshComponent* GetInstancedComponent() const;
    
};

