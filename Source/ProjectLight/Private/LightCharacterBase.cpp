


#include "LightCharacterBase.h"

// Sets default values
ALightCharacterBase::ALightCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating the Weapon mesh object
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon Mesh");
	WeaponSocketName=FName("Weapon Socket");
	Weapon->SetupAttachment(GetMesh(),WeaponSocketName);
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void ALightCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALightCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

