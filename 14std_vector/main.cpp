#include <iostream>
#include <vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x,float y,float z)
		:x(x),y(y),z(z)
	{}

	//�������캯��
	Vertex(const Vertex& vertex)
		:x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

//std::vector�����÷���vectro��STL����׼ģ��⣩���
void VectorBase()
{
	std::vector<float> Vertexes;
	Vertexes.push_back(1.f);
	Vertexes.push_back(2.f);
	Vertexes.push_back(3.f);

	//for (int i = 0; i < Vertexes.size(); i++)
	//{
	//	std::cout << Vertexes[i] << std::endl;
	//}

	//ȥ������ڶ���Ԫ��
	Vertexes.erase(Vertexes.begin() + 1);

	//const������ ���⸴��
	for (const float& v : Vertexes)
	{
		std::cout << v << std::endl;
	}

	//�������
	Vertexes.clear();
}

//std::vector��û��ʹ���Ż�ʱ�����������push_back���������ο���
void VectorNotOptimize()
{
	//ÿ��push_back�����Ǹ�vertexes���·���һ�������ڴ���ȷ����װ���µ�Ԫ������

	std::vector<Vertex> vertexes;
	vertexes.push_back(Vertex(1,2,3));
	vertexes.push_back(Vertex(4,5,6));
	vertexes.push_back(Vertex(7,8,9));

}

//std::vector��ʹ���Ż�
void VectorOptimize()
{
	std::vector<Vertex> vertexes;

	//�Ż�����һ��Ԥ�ȷ���һ��������
	vertexes.reserve(3);

	vertexes.push_back(Vertex(1,2,3));
	vertexes.push_back(Vertex(4,5,6));
	//�Ż����Զ���ʹ��emplace_back,Ȼ��ֻ����Vertex���캯���Ĳ����б�(7,8,9)��Ҳ����ֱ����vector���ڴ���ʹ�ò����б���һ������
	//			  ���������Vertex(7,8,9),�����ȹ�����һ�������ٸ��Ƶ�ʵ�ʵ������У����Ի����Vertex(7,8,9)����Ŀ�������
	vertexes.emplace_back(7,8,9);

}


int main()
{
	VectorBase();

	//VectorNotOptimize();

	VectorOptimize();


	std::cin.get();
}