//Algo5-10.cpp ���ø�����������������֮����̾���ĳ���
#include "C5-1.h"
#include "Floyd.h"
#include "Func5-1.h"
#include "Func5-2.h"
void main()
{
	int i, j, q=1;
	Floyd<V, A> f;
	f.CreateFromFile("Map.txt");
	f.ShortestPath_FLOYD();
	cout<<"���д��룺"<<endl;
	for(i=0; i<f.GetVexNumOrArcNum(true); i++)
	{
		cout<<setw(4)<<i<<f.GetVex(i).name<<' ';
		if(i%7==6)
			cout<<endl;
	}
	cout<<endl;
	while(q)
	{
		cout<<"��ѡ��1 ��ѯ�����м����̾���  0 ����"<<endl;
		cin>>q;
		if(q)
		{
			cout<<"������Ҫ��ѯ�������д��� �յ���д��룺";
			cin>>i>>j;
			f.DisplayP(i, j);
			cout<<endl;
			f.Path(i, j);
		}
	}
}

