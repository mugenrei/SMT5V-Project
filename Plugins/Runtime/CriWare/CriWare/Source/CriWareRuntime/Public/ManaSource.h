#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ManaSource.generated.h"

UCLASS(Abstract, Blueprintable)
class CRIWARERUNTIME_API UManaSource : public UObject {
    GENERATED_BODY()
public:
    UManaSource();

};

