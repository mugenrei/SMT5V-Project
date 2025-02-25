#pragma once
#include "CoreMinimal.h"
#include "EDevilVoiceType.generated.h"

UENUM(BlueprintType)
enum class EDevilVoiceType : uint8 {
    EDevilVoiceType_None,
    IdleA,
    IdleB,
    Damage,
    Dead,
    Attack,
    Escape = 7,
    Find = 10,
    Move_Found,
    Move_NotFound,
    Skill_Physical = 21,
    Skill_Magic,
    Skill_Support,
    Skill_Unique = 31,
    Skill_Unique2,
    Skill_Unique3,
    Skill_Unique4,
    FightingSpirit = 41,
    DevilTalk_Positive = 51,
    DevilTalk_Negative,
    DevilTalk_Intimidation,
    DevilTalk_Thought,
    DevilTalk_Bearish,
    DevilTalk_Call,
    DevilTalk_Together,
    DevilTalk_Disappointment,
    DevilTalk_Yorosiku = 61,
    NPCTalk_Positive1 = 71,
    NPCTalk_Positive2,
    NPCTalk_Negative1,
    NPCTalk_Negative2,
    NPCTalk_Intimidation,
    NPCTalk_Thought,
    NPCTalk_Bearish,
    NPCTalk_Call,
    NPCTalk_Together,
    NPCTalk_Disappointment,
};

