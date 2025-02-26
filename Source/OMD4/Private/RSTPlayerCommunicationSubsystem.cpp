#include "RSTPlayerCommunicationSubsystem.h"

URSTPlayerCommunicationSubsystem::URSTPlayerCommunicationSubsystem() {
    this->PingWidgetHAlign = HAlign_Center;
    this->PingWidgetVAlign = VAlign_Center;
    this->PingInteractScanRate = 0.10f;
    this->PingCenteredRadius = 0.20f;
    this->DefaultPingLifespan = 10.00f;
    this->DefaultDopplerPingLifespan = 2.00f;
    this->DefaultDopplerAlphaCurve = NULL;
    this->DefaultDopplerScaleCurve = NULL;
    this->DefaultDopplerPeriod = 0.10f;
    this->DefaultDopplerPulseCount = 2;
    this->PingRechargeTime = 3.00f;
    this->MaxPings = 5;
    this->PingInteractIndicator = NULL;
}

void URSTPlayerCommunicationSubsystem::RemovePing(ARSTPlayerState* Instigator, int32 PingTrackerId, bool bNotifyRemote) {
}

bool URSTPlayerCommunicationSubsystem::IsLocalPlayerPing(const FRSTPingTrackerData& PingBeingLookedAt) const {
    return false;
}

bool URSTPlayerCommunicationSubsystem::GetPingTrackerFromIndicator(URSTIndicatorDescriptor* Indicator, FRSTPingTrackerData& PingTrackerData) const {
    return false;
}

FLinearColor URSTPlayerCommunicationSubsystem::GetPingLinearColorFromTracker(const FRSTPingTrackerData& PingTrackerData) const {
    return FLinearColor{};
}

FLinearColor URSTPlayerCommunicationSubsystem::GetPingLinearColorFromPlayerState(const ARSTPlayerState* PlayerState) const {
    return FLinearColor{};
}

FLinearColor URSTPlayerCommunicationSubsystem::GetPingLinearColorFromPlayerIndex(int32 PlayerIndex) const {
    return FLinearColor{};
}

bool URSTPlayerCommunicationSubsystem::GetLookedAtPing(FRSTPingTrackerData& CurrentPing) const {
    return false;
}

bool URSTPlayerCommunicationSubsystem::AddSystemCommunication(URSTCommunicationDefinition* CommunicationOption, AActor* AttachedToActor, const FVector& PingPosition, int32& OutPingId) {
    return false;
}


