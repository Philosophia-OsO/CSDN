//Main2-5.cpp ��֤˳�����SqQueue<T>��ĳ�Ա����
#include "C.h"
#include "SqQueue.h"
typedef int T;
#include "Func1-1.h"
void main()
{
	int k;
	T d;
	SqQueue<T> Q(5);
	for(k=0; k<5; k++)
		Q.EnQueue(k);
	cout<<"���5��Ԫ�غ󣬶��е�Ԫ������Ϊ";
	Q.QueueTraverse(print);
	for(k=0; k<2; k++)
	{
		Q.DeQueue(d);
		cout<<"�����˶�ͷԪ�أ���ֵΪ"<<d<<endl;
	}
	cout<<"��ǰ�����е�Ԫ������Ϊ";
	Q.QueueTraverse(print);
}

