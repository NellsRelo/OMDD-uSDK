#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RSTHeroSelectProxyActor.generated.h"

class URDialogueComponent;
class URSTAttachmentManagerComponent;
class URSTSkinDefinition;
class USkeletalMeshComponentBudgeted;

UCLASS(Abstract, Blueprintable)
class OMD4_API ARSTHeroSelectProxyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* SkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTAttachmentManagerComponent* AttachmentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URSTSkinDefinition* SkinDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URDialogueComponent* DialogueComponent;
    
    ARSTHeroSelectProxyActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void NotifyCharacterSelected();
    
};

