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
	std::cout << "오늘부터 1일" << std::endl;
	cout << "아무거나 입력" << endl;
	std::cin >> x;
	std::cout << "그거슨 "<<x<<"였구요\n"<< std::endl;
	mycode::foo();
	//cout << uninitializedvalue <<" is random"<< endl;
	cout << initializedvalue << endl;
	cout << "아무거나 입력2" << endl;
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