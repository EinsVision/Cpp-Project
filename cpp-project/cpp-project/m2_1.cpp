#include "cpp.h";

// ������ (integer)
void Project::m2_1()
{
	using namespace std;
	cout << "Integer" << endl;

	// c style �ʱ�ȭ
	int x = 0;
	int y, z = 0;

	x = 1;
	y = 2;
	z = 3;

	cout << x << ", " << y << ", " << z << endl;


	// c++ style �ʱ�ȭ
	int a(1), b(2), c(3);
	cout << a << ", " << b << ", " << c << endl;

	// �Ǽ��� ���� ����
	int num0 = 1;
	int num1 = num0 * 1.5;
	int num2 = num0 / 2;
	int num3 = 2.5;

	cout <<"num0: "<< num0 << " num1: " << num1 << " num2: " << num2 << " num3: " << num3 << endl;

	// �Ǽ��� ���� ����
	int num4 = 11;
	int num5 = 011;  // 8����
	int num6 = 0b11; // 2����
	int num7 = 0x11; // 16����

	cout << "num4: " << num4 << " num5: " << num5 << " num6: " << num6 << " num7: " << num7 << endl;

	// int, signed, signed int ��� ���� �ǹ��̴�.
	// unsigned, unsigned int �� ���� �ǹ��̴�.
	// short, short int, sigend short, signed short int ��� ���� �ǹ��̴�.
	// usgined short, unsigned short int �� ���� �ǹ��̴�.

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

	// ���� ȯ�濡 ���� ������ ũ�Ⱑ �޶��� �� �ִ� ������ �ִ�. fixed width integer ���!!
	int16_t num16; // � platform������ 16 bit �̴�.
	int8_t num8;
	int32_t num32;

	cout << sizeof(num8) << endl;
	cout << sizeof(num16) << endl;
	cout << sizeof(num32) << endl;

	unsigned int a = 11u; // �̷��� u �� ��������� ��� ���ɿ� ��ȭ�� ����.
	long int lognNUM = 0L; // type ��ȯ�� �̷����� �ʰ� long���� �Ҵ�ȴ�.
	long long longLongNum = 0LL; 
	unsigned long long ulongLongNum = 0LLu;
}