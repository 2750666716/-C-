#include <iostream>

#define LOG(x) std::cout << x << std::endl

//���ô���
int Incre(int& a)
{
	return a++;
}

int main()
{
	//ָ��
	{
		int var = 8;
		void* ptr = &var;

		int* buffer = new int[8];
		buffer[0] = 90;
	}

	//����
	{

		
		int var = 5;
		int& ref = var;
		ref = 2;
		LOG(ref);

		int a = 9;
		Incre(a);
		LOG(a);
	}

}