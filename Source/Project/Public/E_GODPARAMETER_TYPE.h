#pragma once
#include "CoreMinimal.h"
#include "E_GODPARAMETER_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_GODPARAMETER_TYPE : uint8 {
    E_GODPARAMETER_TYPE_NONE,
    E_GODPARAMETER_TYPE_HADOU,
    E_GODPARAMETER_TYPE_HUKUIN,
    E_GODPARAMETER_TYPE_KAKUSEI,
    E_GODPARAMETER_TYPE_BANSYOU,
};

