#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_PlayNiagaraEffect.h"
#include "VANotifyInterface.h"
#include "VANotify_PlayNiagaraEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class VERTEXANIMATIONMANAGER_API UVANotify_PlayNiagaraEffect : public UAnimNotify_PlayNiagaraEffect, public IVANotifyInterface {
    GENERATED_BODY()
public:
    UVANotify_PlayNiagaraEffect();


    // Fix for true pure virtual functions not being implemented
};

