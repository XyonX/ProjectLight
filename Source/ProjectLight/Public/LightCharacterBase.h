

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LightCharacterBase.generated.h"

UCLASS()
class PROJECTLIGHT_API ALightCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALightCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category=" Character Data")
	TObjectPtr<USkeletalMeshComponent>Weapon;
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category=" Character Data")
	FName WeaponSocketName;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
