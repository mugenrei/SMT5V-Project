#pragma once
#include "CoreMinimal.h"
#include "E_UI_STATUS_SIMPLE_SOURCE.generated.h"

UENUM(BlueprintType)
enum class E_UI_STATUS_SIMPLE_SOURCE : uint8 {
    E_UI_STATUS_SIMPLE_SOURCE_HERO,
    E_UI_STATUS_SIMPLE_SOURCE_NKM,
    E_UI_STATUS_SIMPLE_SOURCE_BASE,
    E_UI_STATUS_SIMPLE_SOURCE_ENEMY,
    E_UI_STATUS_SIMPLE_SOURCE_BIBLE,
    E_UI_STATUS_SIMPLE_SOURCE_EMPTY,
};

