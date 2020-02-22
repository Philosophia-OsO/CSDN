//Algo5-3.cpp DFST��������������ཫ����ͼ����Ϊ����ɭ�֣����Ժ���-�ֵܶ�������洢֮
#include "C5-1.h"
#include "AdjListGraph.h"
#include "CSTree.h"
template<typename VerT, typename ArcT>class DFST:public AdjListGraph<VerT, ArcT>
{
private:
	vector<bool> Visited;
	void DFSTree(int v, CSNode<VerT>* &t)
	{
		bool first=true;
		int w;
		CSNode<VerT> *p, *q;
		Visited[v]=true;
		for(w=FirstAdjVex(v); w>=0; w=NextAdjVex(v, w))
			if(!Visited[w])
			{
				p=new CSNode<VerT>;
				p->data=vexs[w].vex;
				p->firstchild=NULL;
				p->nextsibling=NULL;
				if(first)
				{
					t->firstchild=p;
					first=false;
				}
				else
					q->nextsibling=p;
				
				q=p;
				DFSTree(w, q);
			}
	}
public:
	CSTree<VerT> t;
	void DFSForest()
	{
		CSNode<VerT> *p, *q;
		int v;
		Visited.assign(vexs.size(), false);
		for(v=0; v<vexs.size(); v++)
			if(!Visited[v])
			{
				p=new CSNode<VerT>;
				p->data=vexs[v].vex;
				p->firstchild=NULL;
				p->nextsibling=NULL;
				if(t.root==NULL)
					t.root=p;
				else
					q->nextsibling=p;
					
				q=p;
				DFSTree(v, p);
			}
	}
};
#include "Func5-1.h"
#include "Func5-5.h"
void Visit1(CSNode<V>& tt)
{
	cout<<tt.data.name<<' ';
}
void main()
{
	DFST<V, A> tr;
	string FileName;
	cout<<"�����������ļ�����F5-7.txt����";
	cin>>FileName;
	tr.CreateFromFile(FileName.c_str());
	tr.Display();
	tr.DFSForest();
	cout<<"�ȸ���������ɭ��tr��"<<endl;
	tr.t.PreOrderTraverse(tr.t.Root(), Visit1);
	cout<<endl<<"�����������ɭ��tr��"<<endl;
	tr.t.PostOrderTraverse(tr.t.Root(), Visit1);
	cout<<endl;
}

