#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CategoryWindowBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ACategoryWindowBase : public AActor {
    GENERATED_BODY()
public:
    ACategoryWindowBase(const FObjectInitializer& ObjectInitializer);

};

