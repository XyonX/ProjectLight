

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LightCharacterBase.generated.h"

UCLASS(Abstract)
class PROJECTLIGHT_API ALightCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	ALightCharacterBase();

protected:
	
	virtual void BeginPlay() override;

};
