#pragma once
#include "CoreMinimal.h"
#include "RSTPatchNoteVersionURL.generated.h"

USTRUCT(BlueprintType)
struct FRSTPatchNoteVersionURL {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Blob;
    
    OMD4_API FRSTPatchNoteVersionURL();
};

