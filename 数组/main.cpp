#include <iostream>

int main()
{
	//����ʵ���Ͼ���һ��ָ��
	const int size = 5;
	int example[size];					//�����ַ�����������
	int* ptr = example;
	for (int i = 0; i < 5; i++)
	{
		example[i] = 2;
	}

	example[1] = 5;
	*(ptr + 1) = 6;

	//�ڶ��ϴ�������
	int* another = new int[5];
	for (int i = 0; i < 5; i++)
	{
		another[i] = 2;
	}
	delete[] another;     //�ǵ�delete

	std::cin.get();

}