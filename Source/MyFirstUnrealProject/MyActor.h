// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYFIRSTUNREALPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()

public:	// 공개 범위
	// Sets default values for this actor's properties
	AMyActor();

	int8 i8;   // 8 bit -128 ~ 127
	int16 i16; // 16 bit -32,768 ~ 32,767
	int32 i32; // 32 bit -2,146,480,648(-21억) ~ 2,146,480,647(21억)
	int64 i64; // 64 bit -922경 ~ 922경

	uint8 ui8;   // 8 bit 0 ~ 255
	uint16 ui16; // 16 bit 0 ~ 65,535
	uint32 ui32; // 32 bit 0 ~ 4,294,967,295(42억)
	uint64 ui64; // 64 bit 0 ~ 1844경

	float f; // 32 bit 정밀도 0.00001(5자리)
	double d; // 64 bit 정밀도 0.0000000001(10자리)

	FString fstr; // 저장되는 문자의 길이에 따라서 변수의 길이가 달라지는 타입

	bool b; // true or false

	// UPROPERTY() 프로퍼티 창에서 보이게 해주는 함수
	// EditAnywhere 아키타입이나 인스턴스 양쪽의 프로퍼티 창에서 편집할 수 있음.(어떠한 "Visible" 지정자와도 호환 안됨.)
	// BlueprintReadWrite 블루프린트에서 읽거나 쓸 수 있음. ("BlueprintReadOnly" 지정자와 호완 안됨.)
	// BlueprintReadOnly 블루프린트에서 읽을 수는 있지만 변경은 안됨.("BlueprintReadWrite" 지정자와 호완 안됨.)
	// Category 블루프린트 편집 툴에 이 프로퍼티를 표시할 때의 카테고리를 지정.
	// Transient 이 프로퍼티는 휘발성이라, 저장 또는 로드되지 않음.
	// VisbleAnywhere 모든 프로퍼티 창에 보이지만 편집할 수 없음(어떠한 "Edit" 지정자와도 호완 안됨.)

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
