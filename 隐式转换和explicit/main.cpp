#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	explicit Entity(const std::string& name)
		:m_Name(name), m_Age(-1) {}

	Entity(int age)
		:m_Name("UnKnown"),m_Age(age){}

};

void PrintEntity(const Entity& entity)
{
	//PrintEntity
}


int main()
{
	//Entity a("Jie");
	//Entity b(22);			//����ʹ�����ַ�ʽ���죬Ҫ����ʹ����ʽ����

	//��ʽ�ؽ�22ת����һ��Entity�������һ��Entity
	Entity b = 22;

	//���ﱨ������Ϊexplicit�ؼ��ֽ�������ʽת����������ʾ���ù��캯��
	//explicit ���Է�ֹ����ת�������³�bug
	Entity a = std::string("Jie");
	PrintEntity(std::string("Jie"));
	Entity a("Jie");
	PrintEntity(Entity("Jie"));



	std::cin.get();
}