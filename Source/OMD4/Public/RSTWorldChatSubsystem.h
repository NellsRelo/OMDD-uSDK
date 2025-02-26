#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ERSTChatMessageType.h"
#include "RSTChatMessage.h"
#include "RSTWorldChatSubsystem.generated.h"

UCLASS(Blueprintable)
class OMD4_API URSTWorldChatSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRSTNewChatMessageDelegate, FRSTChatMessage, ChatMessage);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRSTChatMessage> ChatMessages;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSTNewChatMessageDelegate OnNewChatMessage;
    
    URSTWorldChatSubsystem();

    UFUNCTION(BlueprintCallable)
    void AddChatMessage(const FString& Message, ERSTChatMessageType MessageType);
    
};

