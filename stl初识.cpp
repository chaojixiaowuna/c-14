//stl六大组件
//容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器
//1、容器：各种数据结构，如vector、list、deque、set、map等，用来存放数据
//2、算法：各种常用的算法。如sort、find、copy、for_easy等。
//3、迭代器：扮演了容器与算法之间的胶合剂。
//4、仿函数：行为类似函数，可作为算法的某种策略
//5、适配器：一种用来修饰容器或者仿函数或迭代器接口的东西
//6、空间配置器：负责空间的配置与管理

//stl容器就是将运用最广泛的一些数据结构实现出来
//常用的数据结构：数组，链表，树，栈，队列，集合，映射表等
//这些容器分为序列式容器和关联式容器两种、
//序列式容器：强调值的排序，序列式容器中的每个元素均有固定的位置
//关联式容器：二叉树结构，各元素之间没有严格的物理上的顺序关系
//
//算法分为质变算法和非质变算法
//质变算法：是指运算过程中会更改区间的元素的内容=。例如拷贝，替换，删除等等
//非质变算法：是指运算过程中不会更改区间的元素内容，例如，查找，遍历。计数，寻找极值等
//
//迭代器：容器和算法之间粘合剂
//提供一种方法，使之能够依序寻访每个容器所含的各个元素，而又无需暴露该容器的内部表示方法。
//每个容器都有自己专属的迭代器
//迭代器使用非常类似于指针

//vector 存放内置数据类型
//容器 vector
//算法 for_each 遍历算法
//迭代器 vector<int>::iterator

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
//	//插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	//遍历读取数组
//	vector<int>::iterator itBegin = v.begin();  //起始迭代器 指向容器中第一个元素
//	vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素的下一个位置
//
//	//第一种遍历方式 
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	//第三种遍历方式 使用for_each算法
//	for_each(v.begin(),v.end(),myprint);
//}
//int main()
//{ 
//	test1();
//	return 0;
//}


//vector容器中存放自定义数据类型
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
//	Person p1("小桀", 21);
//	Person p2("小桀", 21);
//	Person p3("小桀", 21);
//	Person p4("小桀", 21);
//	Person p5("小桀", 21);
//	vector<Person> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_name << "年龄:" << (*it).m_age << endl;
//	}
//	
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//vector容器嵌套容器
//容器中嵌套容器，我们将所数据进行遍历输出
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
//		//*it 是容器
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