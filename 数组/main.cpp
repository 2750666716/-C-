#include <iostream>

int main()
{
	//����ʵ���Ͼ���һ��ָ��,�������������ڴ�����������
	const int size = 5;
	int example[size];					//�����ַ�����������
	int* ptr = example;
	for (int i = 0; i < 5; i++)
	{
		example[i] = 2;
	}

	example[1] = 5;
	*ptr = 6;
	*(ptr + 1) = 6;				//����+1 ��ʾָ��ƫ��1*4�ֽڣ���Ϊptr��intָ��   *(int*)((char*)ptr + 4) = 6;

	std::cout << example[1] << std::endl;
	std::cout << sizeof(example) << std::endl;

	//�ڶ��ϴ�������
	int* another = new int[5];
	for (int i = 0; i < 5; i++)
	{
		another[i] = 2;
	}

	//new�˺� �ǵ�delete
	delete[] another;     

	std::cin.get();

}