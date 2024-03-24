// Copyright Baconeta Studios

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/InteractionInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IInteractionInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	/* Interaction Interface */
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	/* End Interaction Interface */

protected:
	virtual void BeginPlay() override;
};
