// Copyright Baconeta Studios


#include "Character/AuraEnemy.h"

#include "Aura/Aura.h"


void AAuraEnemy::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	Weapon->SetRenderCustomDepth(true);
	GetMesh()->CustomDepthStencilValue = CUSTOM_DEPTH_RED
	Weapon->CustomDepthStencilValue = CUSTOM_DEPTH_RED;
}

void AAuraEnemy::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
