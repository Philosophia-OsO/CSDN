//Algo7-6.cpp ��������
#include "C.h"
#include "C4-1.h"
typedef int KeyType;
#include "Heap.h"
#include "Func7-1.h"
void main()
{
	Heap<ID> hs[2];
	string s[2]={"��", "С"};
	for(int i=0; i<=1; i++)
	{
		hs[i].Create_SeqFromFile("F7-1.txt");
		if(i==0)
		{
			cout<<"����ǰ��"<<endl;
			hs[i].Traverse(Visit);
		}
		hs[i].HeapSort(i==0);
		cout<<endl<<s[i]<<"���������"<<endl;
		hs[i].Traverse(Visit);
	}
	cout<<endl;
}

