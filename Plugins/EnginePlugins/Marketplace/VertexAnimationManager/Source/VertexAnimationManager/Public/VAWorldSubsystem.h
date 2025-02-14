#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "VAWorldSubsystem.generated.h"

class UVAInstancedManager;
class UVARuntimeComponent;

UCLASS(Blueprintable)
class VERTEXANIMATIONMANAGER_API UVAWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UVAInstancedManager*> InstancedManager;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVARuntimeComponent*> SyncComponents;
    
public:
    UVAWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void BatchUpdateInstancesTransforms(bool bForceUpdate);
    
};

