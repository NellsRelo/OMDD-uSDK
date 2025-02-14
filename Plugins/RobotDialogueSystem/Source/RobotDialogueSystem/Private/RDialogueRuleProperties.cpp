#include "RDialogueRuleProperties.h"

FRDialogueRuleProperties::FRDialogueRuleProperties() {
    this->Audience = ERDialogueRuleAudience::Invalid;
    this->Priority = ERDialogueRulePriority::Invalid;
    this->Cooldown = 0.00f;
    this->GlobalCooldown = 0.00f;
    this->Weight = 0;
}

