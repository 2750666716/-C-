#include <iostream>

//Static.cpp��Ҳ������һ��s_var�ı������������Ϊ��̬�ģ�ֻ���Լ����ڵ�.cpp���ӣ������Բ�����link����
int s_var = 10;

//���ⲿ��e_var�������
extern int e_var;


void Function()
{
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}


//���ṹ���еľ�̬�����۴������ٸ�ʵ����x,y���ڴ���ֻ��һ�ݣ�
struct Entity
{
	static int x, y;
	static void print() { std::cout << x << "," << y << std::endl; }  //Ҫע�⾲̬�������ܷ��ʷǾ�̬����
};
int Entity::x;
int Entity::y;


//����
class Singleton
{
public:
	static Singleton& Get()
	{
		 static Singleton instance;
		 return instance;
	}

	void Print()
	{
		std::cout << "Singleton" << std::endl;
	}
};


int main()
{
	std::cout << s_var << std::endl;
	std::cout << e_var << std::endl;

	Entity e;
	
	Entity::x = 9;
	Entity::y = 9;
	
	e.print();

	Function();
	Function();
	Function();

	Singleton::Get().Print();

	
	std::cin.get();
}