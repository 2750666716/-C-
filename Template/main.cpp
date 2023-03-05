#include "iostream"

//ģ�庯��
template<typename T>
void Print(const T Value)
{
	std::cout << Value << std::endl;
}

//ģ����
template<typename T,int Size>
class Array
{
private:
	T m_Array[Size];
public:
	int GetSize() const { return Size; }
};

int main()
{
	Print<int>(10);
	Print("Hello");

	Array<int, 5> array;
	
} 