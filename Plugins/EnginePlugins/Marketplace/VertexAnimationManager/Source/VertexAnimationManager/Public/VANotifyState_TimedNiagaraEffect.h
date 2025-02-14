#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponentPoolMethodEnum.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "VANotifyStateInterface.h"
#include "VANotifyState_TimedNiagaraEffect.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VERTEXANIMATIONMANAGER_API UVANotifyState_TimedNiagaraEffect : public UAnimNotifyState_TimedNiagaraEffect, public IVANotifyStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENCPoolMethod PoolMethod;
    
    UVANotifyState_TimedNiagaraEffect();


    // Fix for true pure virtual functions not being implemented
};

