#include <iostream>

//��α�ʾ��ֻ��Ԥ�����ж���YJ_DEBUG��ִ����䣬�����滻Ϊ��
//˵����Щ��ֻ�����ڵ���(Debug),��release�½����滻Ϊ�����(����ִ�д�ӡ��LOG)
#if YJ_DEBUG == 1
#define ��ӡ(message) std::cout <<message<<std::endl;
#define LOG(message) std::cout <<message<<std::endl;
#else
#define ��ӡ(message)
#define LOG(message)
#endif // YJ_DEBUG


//����ʹ�ö��к������main���������ﷴб��(\)��enter���е�ת���
#define MAIN int main()\
{\
	LOG(5);\
	std::cin.get();\
}

MAIN

//int main()
//{
//	��ӡ(5);
//	LOG(5);
//	std::cin.get();
//}