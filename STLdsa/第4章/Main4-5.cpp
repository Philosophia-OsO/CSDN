//Main4-5.cpp ��֤�����RBTree<T>��ĳ�Ա����
#include "C.h"
#include "RBTNode.h"
#include "C4-1.h"
#define BiTNode RBTNode
#include "Func4-2.h"
#include "Func4-4.h"
#include "RBTree.h"
void main()
{
	RBTree<T> t;
	T r, r1[4];
	bool k;
	ifstream fin("F4-5.txt");
	while(!fin.eof())
	{
		if(InputFromFile(fin, r))
		{
			k=t.Insert(r);
			if(k)
			{
				cout<<"����ؼ���Ϊ"<<r.key<<"�Ľ���������������t��"<<endl;
				t.OrderTraverse(t.Root(), In, VisitRB);
				cout<<endl<<"������������t��"<<endl;
				t.OrderTraverse(t.Root(), Pre, VisitRB);
				cout<<endl;
			}
			else
			{
				cout<<"�����t���Ѵ��ڹؼ���Ϊ"<<r.key<<"�����ݣ���(";
				cout<<r.key<<", "<<r.others<<")�޷����뵽t�С�"<<endl;
			}
		}
	}
	fin.close();
	r1[0].key=70;
	r1[1].key=90;
	r1[2].key=99;
	r1[3].key=50;
	for(int i=0; i<4; i++)
	{
		k=t.BSDTree<T>::Delete(r1[i].key);
		if(k)
		{
			cout<<"ɾ���ؼ���Ϊ"<<r1[i].key<<"�Ľ���������������t��"<<endl;
			t.OrderTraverse(t.Root(), In, VisitRB);
			cout<<endl<<"������������t��"<<endl;
			t.OrderTraverse(t.Root(), Pre, VisitRB);
			cout<<endl;
		}
		else
			cout<<"�����t�в����ڹؼ���Ϊ"<<r1[i].key<<"������"<<endl;
	}
}

