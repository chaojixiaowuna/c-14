//vector<int>(v)匿名对象
//vector<int>(v)swap(v);压缩内存

//vector容器预留内存
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//void test()
//{
//	vector<int> v;
//	int num=0;//统计开辟内存次数  
//	int* p=NULL;
//	v.reserve(1000000);
//	for (int i = 0; i < 1000000; i++)
//	{
//		v.push_back(i);
//		if (p != &v[0])
//		{
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "开辟内存的次数为：" <<num<< endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//1百万个数据未预留空间需要开辟35次空间 预留空间后只需开辟一次空间