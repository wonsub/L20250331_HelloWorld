#include <iostream>

using namespace std;


//int
//char
//float
//���Կ�����
//���������
//��������



enum EColor
{
	Red = 0,

};
int main()
{
	EColor Color = EColor::Red;


	//����ȯ, casting
	float A = (float)5.5f;
	int B = static_cast<int>(A);

	
	return 0;

}
