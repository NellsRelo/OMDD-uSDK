#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RSTSkinFragment.h"
#include "Templates/SubclassOf.h"
#include "RSTSkinFragment_ActorBinding.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTSkinFragment_ActorBinding : public URSTSkinFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<AActor>> ActorClasses;
    
    URSTSkinFragment_ActorBinding();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TSubclassOf<AActor> GetActorClass(FGameplayTag Identifier, bool& bOutSuccess) const;
    
};

