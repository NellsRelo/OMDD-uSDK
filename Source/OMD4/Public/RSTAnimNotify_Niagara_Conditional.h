#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "RSTConditionalNiagaraAnimData.h"
#include "RSTAnimNotify_Niagara_Conditional.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OMD4_API URSTAnimNotify_Niagara_Conditional : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTConditionalNiagaraAnimData ConditionalTemplates;
    
    URSTAnimNotify_Niagara_Conditional();

};

