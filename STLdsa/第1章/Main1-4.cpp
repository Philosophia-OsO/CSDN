//Main1-4.cpp ��֤˫��ѭ������DLinkList<T>��ĳ�Ա����
#include "C.h"
#include "DLinkList.h"
typedef int T;
#include "Func1-1.h"
void main()
{
	DLinkList<T> L;
	int i, n=4;
	bool j;
	T e;
	for(i=1; i<=5; i++)
		L.ListInsert(i, i);
	cout<<"��L�ı�β���β���1��5��L=";
	L.ListTraverse(print);
	j=L.GetElem(2, e);
	if(j)
		cout<<"����ĵ�2��Ԫ��ֵΪ"<<e<<endl;
	else
		cout<<"�����ڵ�2��Ԫ��"<<endl;
	i=L.LocateElem(n, equal);
	if(i)
		cout<<"����"<<n<<"��Ԫ���ǵ�"<<i<<"��"<<endl;
	else
		cout<<"û�е���"<<n<<"��Ԫ��"<<endl;
	j=L.PriorElem(n, equal, e);
	if(j)
		cout<<n<<"��ǰ����"<<e<<endl;
	else
		cout<<"������"<<n<<"��ǰ��"<<endl;
	j=L.NextElem(n, equal, e);
	if(j)
		cout<<n<<"�ĺ����"<<e<<endl;
	else
		cout<<"������"<<n<<"�ĺ��"<<endl;
	L.ListDelete(2, e);
	cout<<"ɾ����2����㣬ֵΪ"<<e<<"��������������㣺"; 
	L.ListBackTraverse(print);
	cout<<"�����Ԫ�ظ���Ϊ"<<L.ListLength()<<"��";
	cout<<"�����Ƿ�գ�"<<boolalpha<<L.ListEmpty()<<endl;
	L.ClearList();
	cout<<"��պ������Ƿ�գ�"<<boolalpha<<L.ListEmpty()<<endl;
}

