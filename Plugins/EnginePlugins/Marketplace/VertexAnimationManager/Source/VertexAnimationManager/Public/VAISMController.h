#pragma once
#include "CoreMinimal.h"
#include "VAISMControllerAbstract.h"
#include "VAISMController.generated.h"

class UInstancedStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VERTEXANIMATIONMANAGER_API UVAISMController : public UVAISMControllerAbstract {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstancedComponent;
    
public:
    UVAISMController(const FObjectInitializer& ObjectInitializer);

};

