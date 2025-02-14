#pragma once
#include "CoreMinimal.h"
#include "VAISMControllerAbstract.h"
#include "VAHISMController.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VERTEXANIMATIONMANAGER_API UVAHISMController : public UVAISMControllerAbstract {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* InstancedComponent;
    
public:
    UVAHISMController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHierarchicalInstancedStaticMeshComponent* GetHierarchicalInstancedComponent() const;
    
};

