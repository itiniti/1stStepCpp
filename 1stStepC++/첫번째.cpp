#include <iostream>
using namespace std;


namespace mycode {
	void foo() {
		cout << 4 * 9 << endl;;
	}


}
int main() {
	int x;
	//int uninitializedvalue=rand();
	int initializedvalue = 19;
	float somenum = 0;
	int ab = 24;
	std::cout << "Hello, World!" << std::endl;
	printf("Hello, World!\n");
	std::cout << "���ú��� 1��" << std::endl;
	cout << "�ƹ��ų� �Է�" << endl;
	std::cin >> x;
	std::cout << "�װŽ� "<<x<<"������\n"<< std::endl;
	mycode::foo();
	//cout << uninitializedvalue <<" is random"<< endl;
	cout << initializedvalue << endl;
	cout << "�ƹ��ų� �Է�2" << endl;
	cin >> somenum;

	/*int i = (int)somenum;
	int i2 = int(somenum);
	int i3 = static_cast<int>(somenum);
	cout << somenum << "\n" << i << "\n" << i2 << "\n" << i3 << endl;
	*/
	if (somenum > 3) {
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
	}
	return 0;
}