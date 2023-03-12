

#include "MyActor.h"
					/* 변수 초기화 1 */
AMyActor::AMyActor() : TotalDamage(10), DamageTimeInSeconds(1.2f)
{
	PrimaryActorTick.bCanEverTick = true;

	/* 변수 초기화 1 */
	DamagePerSecond = TotalDamage / DamageTimeInSeconds;
	CharacterName = TEXT("NickName");
	bAttackable = true;

	//UE_LOG(LogTemp, Log, TEXT("Constructor"));
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Log, TEXT("BiginPlay"));
}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//UE_LOG(LogTemp, Log, TEXT("Tick"));
}
