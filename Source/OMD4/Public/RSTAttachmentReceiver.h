#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RSTAttachmentReceiver.generated.h"

class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URSTAttachmentReceiver : public UInterface {
    GENERATED_BODY()
};

class IRSTAttachmentReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetSkeletalMesh();
    
};

