#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "VAInstancedManager.generated.h"

class UInstancedStaticMeshComponent;
class UVAISMControllerAbstract;

UCLASS(Blueprintable)
class VERTEXANIMATIONMANAGER_API UVAInstancedManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVAISMControllerAbstract*> Controllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UVAInstancedManager();

};

