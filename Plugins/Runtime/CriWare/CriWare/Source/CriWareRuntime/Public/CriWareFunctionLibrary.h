#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ECriWareSpeakerSystem.h"
#include "CriWareFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UCriWareFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCriWareFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetSpeakerAngleArray(ECriWareSpeakerSystem SpeakerSystem, const TArray<float>& Angles);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalLabelToSelectorByName(const FString& SelectorName, const FString& LabelName);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameVariableByName(const FString& GameVariableName, float Value);
    
};

