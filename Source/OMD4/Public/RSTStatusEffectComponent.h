#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RSTStatusTagToGameplayCues.h"
#include "RSTStatusTagToMark.h"
#include "RSTStatusTagToVulnerability.h"
#include "RSTStatusEffectComponent.generated.h"

class URSTIndicatorDescriptor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OMD4_API URSTStatusEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTStatusTagToGameplayCues> StatusToGameplayCuesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTStatusTagToVulnerability> StatusToVulnerabilityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRSTStatusTagToMark> StatusToMarkList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, URSTIndicatorDescriptor*> StencilToIndicatorMap;
    
public:
    URSTStatusEffectComponent(const FObjectInitializer& ObjectInitializer);

};

