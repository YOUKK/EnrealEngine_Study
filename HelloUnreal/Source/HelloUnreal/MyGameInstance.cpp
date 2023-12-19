// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	Super::Init(); // 가상함수를 재정의할 땐 부모 클래스의 메소드를 호출해주어야 한다!!

	// LogTemp는 로그 카테고리인데 내가 만든 걸 쓸 수도 있고 에픽게임즈에서 제공하는 걸 쓸 수도 있다. 이건 제공된 로그 카테고리임.
	// 두번째는 출력수준, Warning같은걸로 하면 로그창에서 다른 색상으로 구분할 수 있다.
	// string을 TEXT() 매크로로 다룬다. 한국어, 중국어 이런건 알파벳과 다르게 유니코드를 사용하므로 이걸 사용한다.
	// 알파벳만 쓰더라도 TEXT()를 쓰는 게 좋다!
	UE_LOG(LogTemp, Log, TEXT("Hello Unreal")); // 로그 찍기
}
