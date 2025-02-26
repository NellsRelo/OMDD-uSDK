#include "RSTCorruptedTrapGridDecorator.h"

ARSTCorruptedTrapGridDecorator::ARSTCorruptedTrapGridDecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bOverrideTransformVariance = false;
}


