//Algo2-1.cpp STL��ջ��Ӧ��
#include "C.h"
void main()
{
	stack<int> st;
	for(int n=1; n<=5; n++)
		st.push(n);
	cout<<"ջ����"<<st.size()<<"��Ԫ��"<<endl;
	while(!st.empty())
	{
		cout<<st.top()<<' ';
		st.pop();
	}
	cout<<endl;
}

