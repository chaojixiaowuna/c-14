//stl�������
//�������㷨�����������º�����������������������ռ�������
//1���������������ݽṹ����vector��list��deque��set��map�ȣ������������
//2���㷨�����ֳ��õ��㷨����sort��find��copy��for_easy�ȡ�
//3�����������������������㷨֮��Ľ��ϼ���
//4���º�������Ϊ���ƺ���������Ϊ�㷨��ĳ�ֲ���
//5����������һ�����������������߷º�����������ӿڵĶ���
//6���ռ�������������ռ�����������

//stl�������ǽ�������㷺��һЩ���ݽṹʵ�ֳ���
//���õ����ݽṹ�����飬��������ջ�����У����ϣ�ӳ����
//��Щ������Ϊ����ʽ�����͹���ʽ�������֡�
//����ʽ������ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ��
//����ʽ�������������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ
//
//�㷨��Ϊ�ʱ��㷨�ͷ��ʱ��㷨
//�ʱ��㷨����ָ��������л���������Ԫ�ص�����=�����翽�����滻��ɾ���ȵ�
//���ʱ��㷨����ָ��������в�����������Ԫ�����ݣ����磬���ң�������������Ѱ�Ҽ�ֵ��
//
//���������������㷨֮��ճ�ϼ�
//�ṩһ�ַ�����ʹ֮�ܹ�����Ѱ��ÿ�����������ĸ���Ԫ�أ��������豩¶���������ڲ���ʾ������
//ÿ�����������Լ�ר���ĵ�����
//������ʹ�÷ǳ�������ָ��

//vector ���������������
//���� vector
//�㷨 for_each �����㷨
//������ vector<int>::iterator

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void myprint(int val)
//{
//	cout << val <<endl;
//}
//void test1()
//{
//	vector<int> v;
//	//��������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	//������ȡ����
//	vector<int>::iterator itBegin = v.begin();  //��ʼ������ ָ�������е�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ�ص���һ��λ��
//
//	//��һ�ֱ�����ʽ 
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	//�����ֱ�����ʽ ʹ��for_each�㷨
//	for_each(v.begin(),v.end(),myprint);
//}
//int main()
//{ 
//	test1();
//	return 0;
//}


//vector�����д���Զ�����������
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//class Person
//{
//	friend void test1();
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//void test1()
//{
//	Person p1("С��", 21);
//	Person p2("С��", 21);
//	Person p3("С��", 21);
//	Person p4("С��", 21);
//	Person p5("С��", 21);
//	vector<Person> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << (*it).m_name << "����:" << (*it).m_age << endl;
//	}
//	
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//vector����Ƕ������
//������Ƕ�����������ǽ������ݽ��б������
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//void test1()
//{
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	vector<int> v5;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//		v5.push_back(i + 5);
//	}
//	vector<vector<int>> v;
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	v.push_back(v5);
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//*it ������
//		for (vector<int>::iterator vit = (*it).begin(); vit!=(*it).end(); vit++)
//		{
//			cout << *vit<<" ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}