#include "cpp.h";

// 정수형 (integer)
void Project::m2_1()
{
	using namespace std;
	cout << "Integer" << endl;

	// c style 초기화
	int x = 0;
	int y, z = 0;

	x = 1;
	y = 2;
	z = 3;

	cout << x << ", " << y << ", " << z << endl;


	// c++ style 초기화
	int a(1), b(2), c(3);
	cout << a << ", " << b << ", " << c << endl;

	// 실수형 변수 선언
	int num0 = 1;
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;

	cout <<"num0: "<< num0 << " num1: " << num1 << " num2: " << num2 << " num3: " << num3 << endl;

	// 실수형 변수 선언
	int num4 = 11;
	int num5 = 011;  // 8진수
	int num6 = 0b11; // 2진수
	int num7 = 0x11; // 16진수

	cout << "num4: " << num4 << " num5: " << num5 << " num6: " << num6 << " num7: " << num7 << endl;

	// int, signed, signed int 모두 같은 의미이다.
	// unsigned, unsigned int 가 같은 의미이다.
	// short, short int, sigend short, signed short int 모두 같은 의미이다.
	// usgined short, unsigned short int 가 같은 의미이다.

	// LP32:  int 2 long 4 pointer 4 (win16 API)
	// ILP32: int 4 long 4 pointer 4 (Win32 API Unix and Unix-like systems) Linux, Mac OS X
	// LLP64: int 4 long 4 pointer 8 (Win64 API)
	// LP64:  int 4 long 8 pointer 8 (Unix and Unix-like systems) Linux, Max OS X

	// size 
	int intNum = 0;
	long longNum = 0;
	int* intPtr = &intNum;

	cout << sizeof(intNum) << endl;
	cout << sizeof(longNum) << endl;
	cout << sizeof(intPtr) << endl;

	// 개발 환경에 따라 변수의 크기가 달라질 수 있는 문제가 있다. fixed width integer 사용!!
	int16_t num16; // 어떤 platform에서도 16 bit 이다.
	int8_t num8;
	int32_t num32;

	cout << sizeof(num8) << endl;
	cout << sizeof(num16) << endl;
	cout << sizeof(num32) << endl;

	unsigned int a = 11u; // 이렇게 u 로 명시적으로 써야 성능에 변화가 없다.
	long int lognNUM = 0L; // type 변환이 이뤄지지 않고 long으로 할당된다.
	long long longLongNum = 0LL; 
	unsigned long long ulongLongNum = 0LLu;
}