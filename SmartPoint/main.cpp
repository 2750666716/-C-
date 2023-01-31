#include <iostream>
#include <memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print()
	{

	}

};

int main()
{
	{
		std::shared_ptr<Entity> e0;
		{
			//uniqueָ�벻�ܸ��ƣ���Ϊunique�Ķ�����ѿ������캯���Ϳ������������delete�ˡ�
			//std::unique_ptr<Entity> entity(new Entity());
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();

			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;					//��������ӹ���ָ������ü���
		}
	}

	{
		//��ָ����������жϵ�ǰ����ָ���Ƿ���Ч����ָ�벻���������ü���
		std::weak_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;					
		}
		//ע�⣺������ִ�е�e0�������������sharedEntity�ű��ͷţ���ʱ���ü���Ϊ0
		//����ִ�е�����ʱe0�Ѿ���Ұָ���ˣ���־sharedEntity�Ƿ��
	}
	

	

	std::cin.get();
}