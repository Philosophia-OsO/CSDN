//Main5-4.cpp ��֤�����Զ��嶥��ͻ��ṹ����ڽӱ���ĳ�Ա����
#include "C5-1.h"
#include "AdjListGraph.h"
#include "Func5-3.h"
#include "Func5-6.h"
void main()
{
	int i, j, k, n;
	string s="F5-3.txt";
	AdjListGraph<V, A> g[2];
	V v1, v2;
	for(i=0; i<2; i++)
	{
		s[3]=i+'3';
		g[i].CreateFromFile(s);
		g[i].Display();
		cout<<"�����¶��㣬�������¶����ֵ��";
		InputVertex(v1);
		g[i].InsertVex(v1);
		cout<<"�������¶����йصĻ��������뻡����";
		cin>>n;
		for(k=0; k<n; k++)
		{
			cout<<"�������"<<k+1<<"������һ��������ƣ�";
			cin>>v2.name;
			if(g[i].GetDirectedOrWeight(true))
			{
				cout<<"�������"<<k+1<<"������һ����ķ���0����ͷ 1����β����";
				cin>>j;
				if(j)
					g[i].InsertArc(v2, v1);
				else
					g[i].InsertArc(v1, v2);
			}
			else
				g[i].InsertArc(v1, v2);
		}
		g[i].Display();
		cout<<"ɾ�����㼰��صĻ����������ɾ����������ƣ�";
		cin>>v1.name;
		g[i].DeleteVex(v1);
		g[i].Display();
		if(i==1)
		{
			cout<<"�޸Ķ����ֵ����������޸Ķ������ƣ�";
			cin>>v1.name;
			cout<<"��������ֵ��";
			InputVertex(v2);
			g[i].PutVex(v1, v2);
			cout<<"ɾ��һ�������������ɾ�����Ļ�β ��ͷ��";
			cin>>v1.name>>v2.name;
			g[i].DeleteArc(v1, v2);
			g[i].Display();
		}
	}
}

