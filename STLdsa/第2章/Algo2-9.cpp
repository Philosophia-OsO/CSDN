//Algo2-9.cpp STL��˫�˶��е�Ӧ��
#include "C.h"
void out(int a)
{
	cout<<a<<' ';
}
void main()
{
	deque<int> q;
	int a, b;
	for(int n=1; n<=5; n++)
	{
		q.push_back(n);
		q.push_front(n*2);
	}
	for_each(q.begin(), q.end(), out);
	cout<<endl<<"˫�˶���Ԫ�ظ���Ϊ"<<q.size()<<endl;
	a=q.front();
	b=q.back();
	cout<<"��ͷԪ��="<<a<<"����βԪ��="<<b<<endl;
	q.pop_front();
	q.pop_back();
	for_each(q.begin(), q.end(), out);
	cout<<endl;
}

