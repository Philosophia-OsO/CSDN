//Algo7-7.cpp ��֤���ȶ�����ĳ�Ա����
#include "C.h"
#include "C4-1.h"
typedef int KeyType;
#include "PriQueue.h"
#include "Func7-1.h"
void main()
{
	PriQueue<ID> pq;
	bool flag=true;
	ID e;
	ifstream fin("F7-1.txt");
	while(!fin.eof())
	{
		if(InputFromFile(fin, e))
			pq.EnQueue(e, flag);
	}
	fin.close();
	pq.GetHead(e);
	cout<<"��ͷԪ����";
	Visit(e);
	cout<<"�����γ������ȶ��е����ݣ�"<<endl;
	while(!pq.QueueEmpty())
	{
		pq.DeQueue(e, flag);
		Visit(e);
	}
	cout<<endl;
}

