#include <iostream>

using namespace std;

int main()
{
	//char
	//int
	//float
	//���Կ�����
	//���������
	//��������
	int Number1 = 4;
	int Number2 = 5;
	
	float A = 1.5f;

	//char Number; //char : [][][][][][][][] �޸𸮿� 8��Ʈ�� ������ �Ҵ��ϰ� �̰� ���ڷ�;
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

	//�ּ��߰�
	//����ȯ, Casting
	float Number8 = (float)Number1 / (float)Number2;
	cout << Number8 << endl;
	float B = 5.5f;
	int C = (int)B;


	cout << Number1 + Number2 << endl;

	return 0;
}