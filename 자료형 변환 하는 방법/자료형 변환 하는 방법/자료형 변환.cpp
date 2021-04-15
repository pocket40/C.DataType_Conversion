#include <iostream>
using namespace std;

int main() {

	int a = 3.141592;
	cout << a << endl;

	//강제적으로 데이터형 변환
	//typeName(a) (typeName)a
	char ch = 'M';
	cout << (int)ch << " " << int(ch) << endl;

	//C++
	//static_cast<typeName>

	cout << static_cast<int>(ch) << endl;

	return 0;
	
	// Commit 확인 메시지
}