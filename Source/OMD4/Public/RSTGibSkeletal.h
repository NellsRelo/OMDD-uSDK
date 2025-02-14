#pragma once
#include "CoreMinimal.h"
#include "RSTGib.h"
#include "RSTGibSkeletal.generated.h"

class UNiagaraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTGibSkeletal : public ARSTGib {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FXMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NSBlood;
    
public:
    ARSTGibSkeletal(const FObjectInitializer& ObjectInitializer);

};

