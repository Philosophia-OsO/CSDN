//Main1-5.cpp ��֤��̬����StLinkList<T>��ĳ�Ա����
#include "C.h"
#include "StLinkList.h"
typedef int T;
#include "Func1-1.h"
void main()
{
	StLinkList<T> L;
	T e, e0=3;
	bool i;
	int j, k;
	for(j=1; j<=5; j++)
		i=L.ListInsert(j, j);
	cout<<"��L�ı�β���β���1��5��L=";
	L.ListTraverse(print);
	cout<<"L�Ƿ�գ�"<<boolalpha<<L.ListEmpty()<<"����L�ĳ���=";
	cout<<L.ListLength()<<endl;
	i=L.PriorElem(e0, equal, e);
	if(i)
		cout<<"Ԫ��"<<e0<<"��ǰ��Ϊ"<<e<<endl;
	else
		cout<<"Ԫ��"<<e0<<"��ǰ����";
	i=L.NextElem(e0, equal, e);
	if(i)
		cout<<"Ԫ��"<<e0<<"�ĺ��Ϊ"<<e<<endl;
	else
		cout<<"Ԫ��"<<e0<<"�޺�̣�";
	k=L.ListLength();
	for(j=k+1; j>=k; j--)
	{
		i=L.ListDelete(j, e);
		if(i)
			cout<<"ɾ����"<<j<<"��Ԫ�سɹ�����ֵΪ"<<e<<endl;
		else
			cout<<"ɾ����"<<j<<"��Ԫ��ʧ�ܣ������ڴ�Ԫ�أ���";
	}
	cout<<"�������L��Ԫ�أ�";
	L.ListTraverse(print);
	L.ClearList();
	cout<<"���L��L=";
	L.ListTraverse(print);
	cout<<"L�Ƿ�գ�"<<boolalpha<<L.ListEmpty()<<"����L�ĳ���=";
	cout<<L.ListLength()<<endl;
}

