#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectComponent.h"
#include "ERSTCharacterWeightClass.h"
#include "RSTLaunchGameplayEffectComponent_Base.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTLaunchGameplayEffectComponent_Base : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LaunchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERSTCharacterWeightClass MaxWeightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelKnockbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWorldOriginForRotation;
    
public:
    URSTLaunchGameplayEffectComponent_Base();

};

