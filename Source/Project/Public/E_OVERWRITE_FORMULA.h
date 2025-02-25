#pragma once
#include "CoreMinimal.h"
#include "E_OVERWRITE_FORMULA.generated.h"

UENUM(BlueprintType)
enum class E_OVERWRITE_FORMULA : uint8 {
    E_OVERWRITE_FORMULA_NONE,
    E_OVERWRITE_FORMULA_VAL,
    E_OVERWRITE_FORMULA_DEATH,
    E_OVERWRITE_FORMULA_NOTCURE_ATTRBST,
    E_OVERWRITE_FORMULA_AID_VAL,
    E_OVERWRITE_FORMULA_AID_TURN,
    E_OVERWRITE_FORMULA_CURE_BST,
    E_OVERWRITE_FORMULA_HPUP_RATE,
    E_OVERWRITE_FORMULA_MAX_ATTACK_CNT,
    E_OVERWRITE_FORMULA_MP_CURE_RATE,
    E_OVERWRITE_FORMULA_MP_CURE_VALUE,
};

