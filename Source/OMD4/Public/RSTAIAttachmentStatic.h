#pragma once
#include "CoreMinimal.h"
#include "RSTAIAttachment.h"
#include "RSTAIAttachmentStatic.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class OMD4_API ARSTAIAttachmentStatic : public ARSTAIAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FXMesh;
    
public:
    ARSTAIAttachmentStatic(const FObjectInitializer& ObjectInitializer);

};

