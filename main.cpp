#include <iostream>

using namespace std;


int main()
{
	int num1, num2;
	float num1f, num2f;


	//num1 = 5, num2 = 4;
	cout << "정수형 두 수를 입력해주세요" << endl;
	cin >> num1 >> num2;

	cout << "두 수의 + 결과:"<<num1 + num2 << endl;
	cout << "두 수의 - 결과:" << num1 - num2 << endl;
	cout << "두 수의 * 결과:" << num1 * num2 << endl;
	cout << "두 수의 / 결과:" << num1 / num2 << endl;


	cout << "실수형 두 수를 입력해주세요" << endl;
	cin >> num1f >> num2f;

	cout << "두 수의 + 결과:" << num1f + num2f << endl;
	cout << "두 수의 - 결과:" << num1f - num2f << endl;
	cout << "두 수의 * 결과:" << num1f * num2f << endl;
	cout << "두 수의 / 결과:" << num1f / num2f << endl;


	
	return 0;

}
