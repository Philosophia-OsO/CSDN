//Algo5-2.cpp AdjListGraph.h��������������Ⱥ͹���������������ĳ���
#include "C5-1.h"
#include "AdjListGraph.h"
#include "Func5-1.h"
#include "Func5-5.h"
void main()
{
	AdjListGraph<V, A> g[2];
	string s="F5-5.txt";
	for(int i=0; i<2; i++)
	{
		s[3]=i+'5';
		g[i].CreateFromFile(s);
		cout<<"AdjListGraph�����������������ͼ�Ľ����";
		g[i].DFSTraverse(Visit);
		cout<<"AdjListGraph����������������ͼ�Ľ����";
		g[i].BFSTraverse(Visit);
	}
}

