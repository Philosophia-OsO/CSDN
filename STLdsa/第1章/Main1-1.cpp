//Main1-1.cpp ��֤˳���SqList<T>��ĳ�Ա����
#include "C.h"
#include "SqList.h"
//�������пɸ�����Ҫѡ��һ����ֻ��ѡ��һ����������ı�SqList.h
typedef int T;
//typedef double T;//�������µ���������TΪ˫�����ͣ�print()��Ҫ����6��
#include "Func1-1.h"
void main()
{
	bool i;
	int j, k;
	T e, e0;
	SqList<T> L;
	for(j=1; j<=5; j++)
		L.ListInsert(0, j);
	cout<<"��L�ı�ͷ���β���1��5��L=";
	L.ListTraverse(print);
	cout<<"L�Ƿ�գ�"<<boolalpha<<L.ListEmpty()<<"����="
	<<L.ListLength()<<endl;
	L.GetElem(3, e);
	cout<<"elem[3]��ֵΪ"<<e<<endl;
	for(j=L.ListLength()-1; j<=L.ListLength()+1; j++)
	{
		k=L.LocateElem(j, equal);
		if(k>=0)
			cout<<"ֵΪ"<<j<<"��Ԫ��λ��L.elem["<<k<<"]��";
		else
			cout<<"û��ֵΪ"<<j<<"��Ԫ��\n";
	}
	k=L.LocateElem(2, sq);
	cout<<"��2��ƽ����ȵ�Ԫ����λ��Ϊ["<<k<<"]\n";
	for(j=0; j<=1; j++)
	{
		L.GetElem(j, e);
		i=L.PriorElem(e, equal, e0);
		if(i)
			cout<<"Ԫ��"<<e<<"��ǰ��Ϊ"<<e0<<endl;
		else
			cout<<"Ԫ��"<<e<<"��ǰ����";
	}
	for(j=L.ListLength()-2; j<L.ListLength(); j++)
	{
		L.GetElem(j, e);
		i=L.NextElem(e, equal, e0);
		if(i)
			cout<<"Ԫ��"<<e<<"�ĺ��Ϊ"<<e0;
		else
			cout<<"��Ԫ��"<<e<<"�޺��"<<endl;
	}
	k=L.ListLength();
	for(j=k; j>=k-1; j--)
	{
		i=L.ListDelete(j, e);
		if(i)
			cout<<"ɾ��L.elem["<<j<<"]�ɹ�����ֵΪ"<<e;
		else
			cout<<"ɾ��L.elem["<<j<<"]ʧ�ܡ�";
	}
	L.ListTraverse(dbl);
	L.ListTraverse(print);
	SqList<T> L1;
	L1=L;
	SqList<T> L2=L;
	SqList<T> L3(L);
	L.ClearList();
	cout<<endl<<"���L��L�Ƿ�գ�"<<boolalpha<<L.ListEmpty();
	cout<<"����="<<L.ListLength()<<endl;
}

