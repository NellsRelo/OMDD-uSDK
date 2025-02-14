#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VANotifyHandler.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew, Transient)
class VERTEXANIMATIONMANAGER_API UVANotifyHandler : public UObject {
    GENERATED_BODY()
public:
    UVANotifyHandler();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetOwningComponent() const;
    
};

