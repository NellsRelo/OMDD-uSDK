#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "VASMComponent.generated.h"

class UVARuntimeComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VERTEXANIMATIONMANAGER_API UVASMComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RuntimeComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVARuntimeComponent> RuntimeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariationName;
    
public:
    UVASMComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVariationByName(FName Variation);
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeComponent(UVARuntimeComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetVariationNames() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetRuntimeComponentNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVARuntimeComponent* GetRuntimeComponent() const;
    
};

