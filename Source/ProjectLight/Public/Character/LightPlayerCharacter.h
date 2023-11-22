

#pragma once

#include "CoreMinimal.h"
#include "Character/LightCharacterBase.h"
#include "LightPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTLIGHT_API ALightPlayerCharacter : public ALightCharacterBase
{
	GENERATED_BODY()


	ALightPlayerCharacter();

protected:
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category=" Character Data")
	TObjectPtr<USkeletalMeshComponent>Weapon;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category=" Character Data")
	FName WeaponSocketName;
	
};
