// Troll Purse. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Composer/ReasonablePlanningDistance.h"
#include "Distance_Integer.generated.h"

/**
 * 
 */
UCLASS()
class REASONABLEPLANNINGAI_API UDistance_Integer : public UReasonablePlanningDistance
{
	GENERATED_BODY()
	
protected:
    virtual float ReceiveCalculateDistance_Implementation(const UReasonablePlanningState* GivenState) const override;
    
    /**
    * Right hand value to use for comparison to the state value (LHS)
    */
    UPROPERTY(EditDefaultsOnly, Category = "RPAI")
    int32 RHS;
};
