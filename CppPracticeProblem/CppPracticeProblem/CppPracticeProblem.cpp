#include <iostream>
#include <algorithm>
using namespace std;

void Swap(int& , int &);

void Swap(int& a, int& b)
{
    int temp = 0;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    //// 1번
    //string name;
    //int age;

    //cout << "이름과 나이를 입력하시오 : ";
    //cin >> name >> age;

    //cout << "나의 이름은 "<< name << "이고, " << age << "살입니다." << endl;

    //// 2번
    //// auto 예약어는 처음 선언 될 때 초깃값의 형식에 맞춰서 인스턴스의 형식을 자동으로 결정한다.

    //auto example = 1;                   // auto 예약어를 사용하여 example 변수 선언
    //cout << sizeof(example) << endl;    // example의 사이즈를 확인

    //// 3번
    //char* example1 = new char[12];      // 동적할당을 하는 모습

    // 4번
    int a = 0;
    int b = 5;

    int& Adda = a;
    int& Addb = b;

    cout << a << " " << b << endl;

    Swap(Adda, Addb);
    Swap(a, b);

    cout << a << " " << b << endl;

    // 5번
    // 문법상으로 && 를 사용한다는 차이가 있다.

    // 6번
    int aList[5] = { 10, 20 , 30 , 40, 50 };
    sort(aList, aList + 5);

    for (auto& num : aList)
    {
        cout << num << " ";
    }
    cout << endl;

}

