// Troll Purse. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Composer/ReasonablePlanningDistance.h"
#include "Distance_Bool.generated.h"

/**
 * 
 */
UCLASS()
class REASONABLEPLANNINGAI_API UDistance_Bool : public UReasonablePlanningDistance
{
	GENERATED_BODY()

protected:
    virtual float ReceiveCalculateDistance_Implementation(const UReasonablePlanningState* GivenState) const override;
    
    /**
    * Right hand value to use for comparison to the state value (LHS)
    */
    UPROPERTY(EditDefaultsOnly, Category = "RPAI")
    bool bRHS;
};
