//Algo7-1.cpp ��֤����������
#include "C.h"
#include "C4-1.h"
typedef int KeyType;
#include "InsSort.h"
#include "Func7-1.h"
void main()
{
	InsSort<ID> is[3];
	for(int i=0; i<3; i++)
	{
		is[i].Create_SeqFromFile("F7-1.txt");
		if(i==0)
		{
			cout<<"����ǰ��"<<endl;
			is[i].Traverse(Visit);
		}
		switch(i)
		{
		case 0: is[i].InsertSort();
				cout<<endl<<"ֱ�Ӳ��������"<<endl;
				break;
		case 1: is[i].BInsertSort();
				cout<<endl<<"�۰���������"<<endl;
				break;
 		case 2: is[i].P2_InsertSort();
 				cout<<endl<<"��·���������"<<endl;
		}
		is[i].Traverse(Visit);
	}
	cout<<endl;
}

