#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "RSTHomingTargetable.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URSTHomingTargetable : public UInterface {
    GENERATED_BODY()
};

class IRSTHomingTargetable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetHomingSocketLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetHomingSocket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetHomingComponent() const;
    
};

