#include <iostream>
using namespace std;

namespace mycode {
	void foo() {
		cout << 4 * 9 << endl;;
	}
}

int main() {
	cout << "���ú��� 1��" << endl <<endl;

	//CPP std::cout �Լ��� C printf�Լ� ��
	std::cout << "Hello, World!" << endl;
	printf("Hello, World!\n");

	//int ���� ���� cin���� �Է� �ޱ�
	int x;
	cout << "�ƹ� ����(int) �Է� : ";
	std::cin >> x;
	std::cout << "�װŽ� " << x << "������\n" << std::endl;
	
	//foo()�Լ� ����
	cout << "foo()�Լ� ���� ��� :";
	mycode::foo();

	//������� �ʴ� �ڵ� #�ʱ�ȭ ���¿� ���� ��� �� �ڵ�� ����.
	/*int uninitializedvalue=rand();
	int initializedvalue = 19;
	cout << uninitializedvalue <<" is random"<< endl;
	cout << initializedvalue << endl;*/

	//float ���� ���� cin���� �Է� �ޱ�
	float somenum = 0;
	cout << "�ƹ� �Ǽ�(float) �Է� : ";
	cin >> somenum;
	
	//���� ��ȯ ����� ���� ��� ��
	int i = (int)somenum;
	int i2 = int(somenum);
	int i3 = static_cast<int>(somenum);
	cout << "(int)somenum : " << i << endl;
	cout << "int(somenum) : " << i2 << endl;
	cout << "static_cast<int>(somenum) : " << i3 << endl;

	//�Ʒ��δ� ���� �ڵ�
	/*int i = (int)somenum;
	int i2 = int(somenum);
	int i3 = static_cast<int>(somenum);
	cout << somenum << "\n" << i << "\n" << i2 << "\n" << i3 << endl;
	*/
	/*if (somenum > 3) {
		int i1 = (int)somenum;
		cout << i1 << endl;
	}
	if (somenum == 3) {
		int i2 = int(somenum);

		cout << i2 << endl;
	}
	if (somenum < 3) {
		int i3 = static_cast<int>(somenum);

		cout << i3 << endl;
	}*/
	return 0;
}