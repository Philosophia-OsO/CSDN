//Main4-4.cpp ��֤ƽ�������AVLTree<T>��ĳ�Ա����
#include "C.h"
#include "AVLTNode.h"
#include "C4-1.h"
#include "C4-2.h"
#define BiTNode AVLTNode
#include "Func4-2.h"
#include "Func4-3.h"
#include "AVLTree.h"
void main()
{
	AVLTree<T> t;
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
				cout<<"����ؼ���Ϊ"<<r.key<<"�Ľ����������ƽ�������t��"<<endl;
				t.OrderTraverse(t.Root(), In, Visit);
				cout<<endl<<"�������ƽ�������t��"<<endl;
				t.OrderTraverse(t.Root(), Pre, Visit);
				cout<<endl;
			}
			else
			{
				cout<<"ƽ�������t���Ѵ��ڹؼ���Ϊ"<<r.key<<"�����ݣ���(";
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
		k=t.Delete(r1[i]);
		if(k)
		{
			cout<<"ɾ�����("<<r1[i].key<<", "<<r1[i].others<<")���������";
			cout<<"���ؼ��֣�ƽ�����ӣ�ƽ�������t��"<<endl;
			t.OrderTraverse(t.Root(), In, VisitBf);
			cout<<endl<<"����������ؼ��֣�ƽ�����ӣ�ƽ�������t��"<<endl;
			t.OrderTraverse(t.Root(), Pre, VisitBf);
			cout<<endl;
		}
		else
			cout<<"ƽ�������t�в����ڹؼ���Ϊ"<<r1[i].key<<"������"<<endl;
	}
}

