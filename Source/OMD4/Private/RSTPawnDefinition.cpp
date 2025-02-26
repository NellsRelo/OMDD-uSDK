#include "RSTPawnDefinition.h"

URSTPawnDefinition::URSTPawnDefinition() {
    this->TagRelationshipMapping = NULL;
    this->InputConfig = NULL;
    this->DefaultCameraMode = NULL;
    this->MaxHealth = 200.00f;
    this->bShieldAlways = false;
    this->MaxShield = 0.00f;
    this->MoveSpeed = 600.00f;
    this->PrimaryCharges = 0.00f;
    this->SecondaryCharges = 0.00f;
    this->SecondaryRechargeRate = 0.00f;
    this->SpecialCharges = 0.00f;
    this->SpecialRechargeRate = 0.00f;
    this->RiftPointCost = 1;
    this->RiftPointIgnoreChance = 0.00f;
    this->InterruptThreshold = 0.00f;
    this->bKnockbackImmune = false;
    this->InterruptThresholdAnim = NULL;
    this->DefaultThreatCap = 3;
    this->LargeThreatCap = 2;
    this->RangedThreatCap = 2;
    this->HuntersThreatCap = 2;
    this->BossThreatCap = 1;
    this->BossSpawnsFromLegacyLocations = true;
}


