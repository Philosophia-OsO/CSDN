//Algo5-1.cpp MatrixGraph��������������Ⱥ͹���������������ĳ���
#include "C5-1.h"
#include "MatrixGraph.h"
#include "Func5-1.h"
#include "Func5-2.h"
void main()
{
	MatrixGraph<V, A> g;
	string s="F5-5.txt";
	for(int i=5; i<7; i++)
	{
		s[3]=i+'0';
		g.CreateFromFile(s);
		cout<<"MatrixGraph�����������������ͼg�Ľ����";
		g.DFSTraverse(Visit);
		cout<<"MatrixGraph����������������ͼg�Ľ����";
		g.BFSTraverse(Visit);
	}
}

