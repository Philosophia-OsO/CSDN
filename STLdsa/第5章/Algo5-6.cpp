//Algo5-6.cpp �������ͼ��һ����������
#include "C5-1.h"
#include "Topo.h"
#include "Func5-1.h"
#include "Func5-5.h"
void main()
{
	Topo<V, A> t;
	t.CreateFromFile("F5-10.txt");
	t.Display();
	t.TopologicalSort();
}

