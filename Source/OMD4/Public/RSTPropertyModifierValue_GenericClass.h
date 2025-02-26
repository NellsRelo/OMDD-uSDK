#pragma once
#include "CoreMinimal.h"
#include "RSTPropertyModifierValue_Class.h"
#include "RSTPropertyModifierValue_GenericClass.generated.h"

class URSTPropertyCustomOperation_ObjectClass;
class URSTPropertyModifierCustomValue_ObjectClass;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class URSTPropertyModifierValue_GenericClass : public URSTPropertyModifierValue_Class {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Val;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyModifierCustomValue_ObjectClass* CustomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URSTPropertyCustomOperation_ObjectClass* CustomOperation;
    
    URSTPropertyModifierValue_GenericClass();

};

