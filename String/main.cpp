#include <iostream>
#include <string>

int main()
{
	//"Jie"��һ���ַ������������ַ����������Ǵ洢���ڴ�ֻ�����ֵ�
	const char* name = "Jie";											//ʵ�������ĸ��ַ������һ���ǿ���ֹ��\0
	char name2[4] = { 'J','i','e','\0' };								//'\0'��ʾ�ַ�����ֹ
	const wchar_t* name4 = L"Jie";										//���ַ�

	std::string name3 = std::string("Jie") + "Hello";                   //string��append
	name3.append("Hello");
	bool contains = name3.find("ll") != std::string::npos;				//string��find

	//�����ַ���
	const char* example = R"(											
Line1
Line2
Line3)";


	std::cout << name2 << std::endl;

	std::cout << name3 << std::endl;									//Ҫ����stringͷ�ļ�����Ȼ�������

	std::cout << example << std::endl;

	
	std::cin.get();

}