//Algo2-8.cpp STL�ж��е�Ӧ��
#include "C.h"
void main()
{
	queue<int> q;
	for(int n=1; n<=5; n++)
		q.push(n);
	cout<<"��βԪ��Ϊ"<<q.back()<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<' ';
		q.pop();
	}
	cout<<endl;
	cout<<"���ڶ���q����"<<q.size()<<"��Ԫ��"<<endl;
}

