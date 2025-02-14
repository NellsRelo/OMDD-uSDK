#pragma once
#include "CoreMinimal.h"
#include "RSTGib.h"
#include "RSTGibStatic.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTGibStatic : public ARSTGib {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FXMesh;
    
public:
    ARSTGibStatic(const FObjectInitializer& ObjectInitializer);

};

