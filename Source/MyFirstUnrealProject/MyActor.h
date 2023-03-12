// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYFIRSTUNREALPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()

public:	// ���� ����
	// Sets default values for this actor's properties
	AMyActor();

	int8 i8;   // 8 bit -128 ~ 127
	int16 i16; // 16 bit -32,768 ~ 32,767
	int32 i32; // 32 bit -2,146,480,648(-21��) ~ 2,146,480,647(21��)
	int64 i64; // 64 bit -922�� ~ 922��

	uint8 ui8;   // 8 bit 0 ~ 255
	uint16 ui16; // 16 bit 0 ~ 65,535
	uint32 ui32; // 32 bit 0 ~ 4,294,967,295(42��)
	uint64 ui64; // 64 bit 0 ~ 1844��

	float f; // 32 bit ���е� 0.00001(5�ڸ�)
	double d; // 64 bit ���е� 0.0000000001(10�ڸ�)

	FString fstr; // ����Ǵ� ������ ���̿� ���� ������ ���̰� �޶����� Ÿ��

	bool b; // true or false

	// UPROPERTY() ������Ƽ â���� ���̰� ���ִ� �Լ�
	// EditAnywhere ��ŰŸ���̳� �ν��Ͻ� ������ ������Ƽ â���� ������ �� ����.(��� "Visible" �����ڿ͵� ȣȯ �ȵ�.)
	// BlueprintReadWrite �������Ʈ���� �аų� �� �� ����. ("BlueprintReadOnly" �����ڿ� ȣ�� �ȵ�.)
	// BlueprintReadOnly �������Ʈ���� ���� ���� ������ ������ �ȵ�.("BlueprintReadWrite" �����ڿ� ȣ�� �ȵ�.)
	// Category �������Ʈ ���� ���� �� ������Ƽ�� ǥ���� ���� ī�װ��� ����.
	// Transient �� ������Ƽ�� �ֹ߼��̶�, ���� �Ǵ� �ε���� ����.
	// VisbleAnywhere ��� ������Ƽ â�� �������� ������ �� ����(��� "Edit" �����ڿ͵� ȣ�� �ȵ�.)

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		int32 TotalDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
		float DamageTimeInSeconds;
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Transient, Category = "Damage")
		float DamagePerSecond;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString CharacterName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bAttackable;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
