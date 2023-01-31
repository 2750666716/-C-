#include <iostream>

class Entity
{
private:
	int m_X, m_Y;
	mutable int m_DebugCount = 0;       //mutable�ؼ��ֱ�ʾ��������const���ƣ��ǿɱ��
public:
	int GetX() const				//����const�ڷ�������ֻ��������Ч����ʾ�����޸����Ա
	{
		m_DebugCount++;
		return m_X;
	}

	int GetX()
	{
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}
};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;   //ע�⣬����ʹ����const�汾��GetX()����
}


int main()
{
	//����һ����������ʾ������䣬
	const int MAX_AGE = 100;

	//����ָ�룬�ܸı�ָ�뱾�������ܸı�ָ����ָ������
	const int* a = new int;
	//*a = 2;//����
	a = &MAX_AGE;

	//ָ�볣�����ܸı�ָ����ָ�����ݣ������ܸı�ָ�뱾��
	int* const b = new int;
	*b = 2;
	//b = &MAX_AGE;//����


	std::cout << *b << std::endl;

	std::cout << *b << std::endl;

	std::cin.get();

}