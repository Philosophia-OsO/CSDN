//Main2-7.cpp ��֤˫��˳��ѭ������DeQueueCy<T>��ĳ�Ա����
#include "C.h"
#include "DeQueueCy.h"
typedef int T;
#include "Func1-1.h"
void main()
{
	bool i;
	T d;
	DeQueueCy<T> Q;
	for(int k=0; k<5; k++)
	{
		assert(Q.EnQueue(k));
		assert(Q.EnQueueAtFront(k*2));
	}
	cout<<"���10��Ԫ�غ󣬶��е�Ԫ������Ϊ";
	Q.QueueTraverse(print);
	Q.DeQueue(d);
	cout<<"�����˶�ͷԪ�أ���ֵΪ"<<d;
	Q.DeQueueAtRear(d);
	cout<<"�������˶�βԪ�أ���ֵΪ"<<d<<endl;
	if(i=Q.GetHead(d))
		cout<<"�µĶ�ͷԪ����"<<d;
	if(i=Q.GetRear(d))
		cout<<"���µĶ�βԪ����"<<d<<endl;
	cout<<"���ڶ��е�Ԫ������Ϊ";
	Q.QueueTraverse(print);
}

