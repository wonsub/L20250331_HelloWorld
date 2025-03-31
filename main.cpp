#include <iostream>

using namespace std;


//int
//char
//float
//대입연산자
//산술연산자
//변수선언



enum EColor
{
	Red = 0,

};
int main()
{
	EColor Color = EColor::Red;


	//형변환, casting
	float A = (float)5.5f;
	int B = static_cast<int>(A);

	
	return 0;

}
