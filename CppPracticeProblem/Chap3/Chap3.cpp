#include "stdafx.h"
#include "CMyString.h"

void TestFunc(const CMyString& param)
{
    cout << param.GetString() << endl;
}

int _tmain(int argc, TCHAR* argv[])
{
    CMyString strData;
    strData.SetString("Hello");
    TestFunc(strData);

    return 0;
}

// 1번 문제
// private는 클래스 내에서만 접근이 가능한 멤버 함수 혹은 변수등을 선언할 때 사용되는 클래스 접근 제어 지시자이다.

// 2번 문제
// 클래스 인스턴스가 생성될 때 자동으로 호출되는 함수는 생성자 함수이다.
// 함수 원형의 가장 큰 외형상 특징은 클래스와 같은 이름을 가진다는 것과 반환값이 없다는 특징을 가진다.

// 3번 문제
// 생성자 초기화 목록

// 4번 문제
// int& -> int로 변경 혹은 참조자 변수를 초기화 시켜준다.

// 5번 문제
// this 포인터

// 6번 문제
// 멤버 변수에 대한 값을 사용할 수 없고 상수형 메서드가 아닌 멤버는 호출할 수 없다.

// 7번 문제
// 정적 멤버는 this 포인터를 이용한 접근이 제한된다.