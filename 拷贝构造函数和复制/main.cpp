#include <iostream>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;

public:
	/*explicit*/ String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + sizeof(char)];
		memcpy(m_Buffer, string, m_Size + sizeof(char));
	}

	//�������캯����ע��������ͺ�������,���ѹ���Ķ���ȥ�����¶���ʱ���Զ�����
	String(const String& other)
		:m_Size(other.m_Size)
	{
		std::cout << "cpoy" << std::endl;
		m_Buffer = new char[m_Size + sizeof(char)];
		memcpy(m_Buffer, other.m_Buffer, m_Size + sizeof(char));
	} 

	~String()
	{
		delete[] m_Buffer;
	}
	
	friend std::ostream& operator<<(std::ostream& stream, const String& string);

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

//��ʹ�����ô��Σ������и��ƣ�
void PrintString(const String& string)
{
	std::cout << string << std::endl;
}

int main()
{

	{
		//������ʵ�ʵ����ݣ�a��b����Ӱ��,���ó���
		int a = 5;
		int b = a;
		int& c = a;


	}

	{
		//���Ƶ���ָ�루һ����ַ����������ָ��ָ����ͬ���ڴ�
		int* a = new int();
		int* b = a;

		*a = 5;
		*b = 6;

		delete a;
	}

	{
		/*������Ĭ�Ͽ������캯��ʱ���Ὣstring��ĳ�Ա����µĶ��󸳸�other������Աm_Buffer��ָ�루������ǳ������
		��������ʱ��m_Bufferָ����ָ���ڴ汻���ͷ������Σ�string��other�������³��������
		*/

		//������ʵʱ��ʽת������ʾ����Ӧ����String string("Jie");
		String string = "Jie";
		String other = string;		//�����˿������캯��

		other[2] = 'a';
		
		PrintString(string);
		PrintString(other);
	}
	

	std::cin.get();
}