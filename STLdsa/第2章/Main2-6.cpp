//Main2-6.cpp ��֤˳���ƶ�����SqQueueNM<T>��ĳ�Ա����
#include "C.h"
#include "SqQueueNM.h"
typedef int T;
#include "Func1-1.h"
void main()
{
	bool i;
	int k;
	T d;
	SqQueueNM<T> Q(5);
	for(k=0; k<6; k++)
		Q.EnQueue(k);
	cout<<"���"<<Q.QueueLength()<<"��Ԫ�غ󣬶��е�Ԫ������Ϊ";
	Q.QueueTraverse(print);
	for(k=0; k<2; k++)
	{
		Q.DeQueue(d);
		cout<<"�����˶�ͷԪ�أ���ֵΪ"<<d<<endl;
	}
	i=Q.EnQueue(100);
	if(!i)
		cout<<"�����������޷�����Ԫ�ء�"<<endl;
	cout<<"��ǰ�����е�Ԫ������Ϊ";
	Q.QueueTraverse(print);
}

