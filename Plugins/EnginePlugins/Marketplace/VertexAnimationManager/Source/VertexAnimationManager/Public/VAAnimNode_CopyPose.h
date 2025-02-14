#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "VAAnimNode_CopyPose.generated.h"

class USkeletalMeshComponent;
class UVARuntimeComponent;
class UVertexAnimationProfile;

USTRUCT(BlueprintType)
struct VERTEXANIMATIONMANAGER_API FVAAnimNode_CopyPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVARuntimeComponent* RuntimeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexAnimationProfile* Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SyncGroup;
    
    FVAAnimNode_CopyPose();
};

