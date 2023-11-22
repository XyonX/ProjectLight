


#include "Character/LightPlayerCharacter.h"

ALightPlayerCharacter::ALightPlayerCharacter()
{
	//Creating the Weapon mesh object
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon Mesh");
	WeaponSocketName=FName("Weapon Socket");
	Weapon->SetupAttachment(GetMesh(),WeaponSocketName);
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
