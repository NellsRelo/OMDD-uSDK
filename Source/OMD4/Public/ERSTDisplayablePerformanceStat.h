#pragma once
#include "CoreMinimal.h"
#include "ERSTDisplayablePerformanceStat.generated.h"

UENUM(BlueprintType)
enum class ERSTDisplayablePerformanceStat : uint8 {
    ClientFPS,
    ServerFPS,
    IdleTime,
    FrameTime,
    FrameTime_GameThread,
    FrameTime_RenderThread,
    FrameTime_RHIThread,
    FrameTime_GPU,
    Ping,
    PacketLoss_Incoming,
    PacketLoss_Outgoing,
    PacketRate_Incoming,
    PacketRate_Outgoing,
    PacketSize_Incoming,
    PacketSize_Outgoing,
    Count,
};

