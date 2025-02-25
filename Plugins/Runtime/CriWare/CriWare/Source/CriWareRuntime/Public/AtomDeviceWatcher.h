#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AtomDeviceWatcher.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomDeviceWatcher : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeviceUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeviceUpdated OnDeviceUpdated;
    
    UAtomDeviceWatcher();

    UFUNCTION(BlueprintCallable)
    FString GetDeviceName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDeviceChannelCount();
    
};

