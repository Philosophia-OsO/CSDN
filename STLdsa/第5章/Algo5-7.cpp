//Algo5-7.cpp ��ؼ�·��
#include "C5-1.h"
#include "Topo.h"
#include "Func5-1.h"
#include "Func5-5.h"
void main()
{
	Topo<V, A> t;
	t.CreateFromFile("F5-11.txt");
	t.Display();
	t.CriticalPath();
}

