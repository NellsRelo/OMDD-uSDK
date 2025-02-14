#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VARuntimeBPLibrary.generated.h"

class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class VERTEXANIMATIONMANAGER_API UVARuntimeBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVARuntimeBPLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateAnimationBlueprint(USkeletalMeshComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetWorldTransform(USceneComponent* InComponent, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static void RagDollStart(USkeletalMeshComponent* SkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void RagdollReset(USkeletalMeshComponent* SkeletalMeshComponent, USceneComponent* InSceneComponent);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPrimaryGPUBrand();
    
    UFUNCTION(BlueprintCallable)
    static float GetDeltaTime();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCPUBrand();
    
    UFUNCTION(BlueprintCallable)
    static float GetAverageMS();
    
    UFUNCTION(BlueprintCallable)
    static float GetAverageFPS();
    
};

