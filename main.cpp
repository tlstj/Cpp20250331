#include <iostream>

using namespace std;

int main()
{
	//char
	//int
	//float
	//대입연산자
	//산술연산자
	//변수선언
	int Number1 = 4;
	int Number2 = 5;
	
	float A = 1.5f;

	//char Number; //char : [][][][][][][][] 메모리에 8비트의 공간을 할당하고 이걸 문자로;
	int Number3 = Number1 + Number2;
	cout << Number3 << endl;

	int Number4 = Number1 - Number2;
	cout << Number4 << endl;

	int Number5 = Number1 * Number2;
	cout << Number5 << endl;

	int Number6 = Number1 / Number2;
	cout << Number6 << endl;

	int Number7 = Number1 % Number2;
	cout << Number7 << endl;

	//주석추가
	//형변환, Casting
	float Number8 = (float)Number1 / (float)Number2;
	cout << Number8 << endl;
	float B = 5.5f;
	int C = (int)B;


	cout << Number1 + Number2 << endl;

	return 0;
}