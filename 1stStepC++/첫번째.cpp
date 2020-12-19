#include <iostream>
using namespace std;

namespace mycode {
	void foo() {
		cout << 4 * 9 << endl;;
	}
}

int main() {
	cout << "오늘부터 1일" << endl <<endl;

	//CPP std::cout 함수와 C printf함수 비교
	std::cout << "Hello, World!" << endl;
	printf("Hello, World!\n");

	//int 형식 변수 cin으로 입력 받기
	int x;
	cout << "아무 정수(int) 입력 : ";
	std::cin >> x;
	std::cout << "그거슨 " << x << "였구요\n" << std::endl;
	
	//foo()함수 실행
	cout << "foo()함수 실행 결과 :";
	mycode::foo();

	//사용하지 않는 코드 #초기화 상태에 따른 결과 비교 코드로 보임.
	/*int uninitializedvalue=rand();
	int initializedvalue = 19;
	cout << uninitializedvalue <<" is random"<< endl;
	cout << initializedvalue << endl;*/

	//float 형식 변수 cin으로 입력 받기
	float somenum = 0;
	cout << "아무 실수(float) 입력 : ";
	cin >> somenum;
	
	//형식 변환 방법에 따른 출력 비교
	int i = (int)somenum;
	int i2 = int(somenum);
	int i3 = static_cast<int>(somenum);
	cout << "(int)somenum : " << i << endl;
	cout << "int(somenum) : " << i2 << endl;
	cout << "static_cast<int>(somenum) : " << i3 << endl;

	//아래로는 원래 코드
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