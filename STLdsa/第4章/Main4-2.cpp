//Main4-2.cpp ��֤��ָ������ṹ�Ķ�����PBiTree<T>��ĳ�Ա����
#include "C.h"
#include "PBiTNode.h"
#include "PBiTree.h"
typedef int T;
T Nil=0;
#include "Func4-1.h"
void Visit1(PBiTNode<T> &c)
{
	cout<<'('<<c.data;
	if(c.parent!=NULL)
		cout<<", "<<c.parent->data;
	cout<<')';
}
void main()
{
	bool f, k;
	string LR;
	PBiTree<T> t, c;
	PBiTNode<T> *p, *q, *r, *s;
	ifstream fin("F4-3.txt");
	t.CreateBiTreeFromFile(fin);
	fin.close();
	cout<<"���ļ�F4-3.txt����������t������ݹ����������t��";
	t.OrderTraverse(t.Root(), Pre, Visit);
	cout<<endl<<"����ݹ�������Ϊ"<<t.BiTreeDepth(t.Root())<<"�Ķ�����t��";
	t.OrderTraverse(t.Root(), In, Visit);
	fin.open("F4-4.txt");
	c.CreateBiTreeFromFile(fin);
	fin.close();
	cout<<endl<<"����������Ϊ�յĶ�����c������ݹ����������c��";
	c.OrderTraverse(c.Root(), Pre, Visit);
	cout<<endl<<"����ݹ����������c��";
	c.OrderTraverse(c.Root(), In, Visit);
	p=t.Root();
	t.Child(p, q, r);
	f=t.InsertChild(q, true, c);
	if(f)
	{
		cout<<endl<<"����ݹ���������Ķ�����t��";
		t.OrderTraverse(t.Root(), Pre, Visit);
		cout<<endl<<"����ݹ���������Ķ�����t��";
		t.OrderTraverse(t.Root(), In, Visit);
	}
	p=t.Root();
	t.Child(p, q, r);
	t.Child(q, p, r);
	p=t.Parent(r);
	cout<<endl;
	cout<<"��t���������ӵ��Һ�����"<<t.Value(r)<<"����˫����"<<t.Value(p);
	f=t.Sibling(r, s, k);
	if(f)
	{
		if(!k)
			LR="��";
		else
			LR="��";
		cout<<"����"<<LR<<"�ֵ���"<<t.Value(s)<<endl;
	}
	cout<<"��tÿ������˫�ף�"<<endl;
	t.OrderTraverse(t.Root(), Pre, Visit1);
	cout<<endl;
}

