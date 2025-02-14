#include "RSTPawnDefinitionEnemy.h"

URSTPawnDefinitionEnemy::URSTPawnDefinitionEnemy() {
    this->CustomRunMoveEffect = NULL;
    this->SightRadius = 700.00f;
    this->DefaultTeamID = ERSTTeams::Enemies;
    this->ThreatGroup = ERSTThreatGroup::Default;
    this->GuardianRoamRadius = 0.00f;
    this->bAlwaysGib = false;
    this->bAlwaysFullyGib = false;
    this->bNeverGib = false;
    this->GibLifeSpan = 0.00f;
    this->LifeSpan = 6.00f;
    this->ScoreOnDeath = 5.00f;
    this->CoinOnDeath = 0;
    this->WeightClass = ERSTCharacterWeightClass::Light;
    this->LaunchImpactDamageThreshold = -1.00f;
    this->LaunchImpactBaseDamage = -1.00f;
    this->LaunchImpactGibChance = 0.00f;
    this->BasePickupDropChance = 0.10f;
}


