//Main1-2.cpp TΪ�û��Զ������͵�ʵ��
#include "C.h"
#include "SqList.h"
#include "Func1-2.h"
void main()
{
	bool i;
	int j=0;
	SqList<Student>L(5);
	ifstream fin("F1-1.txt");
	Student e, e0;
	while(!fin.eof())
	{
		if(InputFromFile(fin, e))
			L.ListInsert(j++, e);
	}
	fin.close();
	cout<<"��L�ı�β���β����ļ�F1-1.txt�е����ݺ󣬱�L=";
	L.ListTraverse(printSt);
	cout<<"L�Ƿ�գ�"<<boolalpha<<L.ListEmpty()<<"����=";
	cout<<L.ListLength()<<endl;
	L.GetElem(3, e);
	cout<<"���Ϊ3��Ԫ����ֵΪ";
	printSt(e);
	cout<<endl;
	i=L.PriorElem(e, equal, e0);
	if(i)
	{
		printName(e);
		cout<<"��ǰ��Ϊ";
		printName(e0);
		cout<<endl;
	}
	i=L.NextElem(e, equal, e0);
	if(i)
	{
		printName(e);
		cout<<"�ĺ��Ϊ";
		printName(e0);
		cout<<endl;
	}
	i=L.ListDelete(3, e);
	if(i)
	{
		cout<<"ɾ�����Ϊ3��Ԫ�سɹ�����ֵΪ";
		printSt(e);
	}
	cout<<"\nĿǰ����L=";
	L.ListTraverse(printSt);
	L.ClearList();
	cout<<"���L��L�Ƿ�գ�"<<boolalpha<<L.ListEmpty();
	cout<<"����="	<<L.ListLength()<<endl;
}

