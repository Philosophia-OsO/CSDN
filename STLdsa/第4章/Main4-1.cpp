//Main4-1.cpp ��֤��������ṹ�Ķ�����BiTree<T>��ĳ�Ա����
#include "C.h"
#include "BiTNode.h"
#include "BiTree.h"
typedef char T;
T Nil='#';
#include "Func4-1.h"
void main()
{
	BiTree<T> t, c;
	BiTNode<T> *p, *q, *r, *s;
	T e;
	bool f, k;
	string LR;
	cout<<"��t�շ�"<<boolalpha<<t.BiTreeEmpty()<<"����t�����=";
	cout<<t.BiTreeDepth(t.Root())<<endl;
	ifstream fin("F4-1.txt");
	t.CreateBiTreeFromFile(fin);
	fin.close();
	cout<<"���ļ�F4-1.txt����������t����t�շ�"<<boolalpha<<t.BiTreeEmpty();
	cout<<"����t�����="<<t.BiTreeDepth(t.Root())<<endl;
	cout<<"����ݹ����������t��";
	t.OrderTraverse(t.Root(), Pre, Visit);
	cout<<endl<<"����ݹ����������t��";
	t.OrderTraverse(t.Root(), In, Visit);
	p=t.Root();
	cout<<endl<<"t�ĸ����="<<t.Value(p)<<"��������㸳��ֵ����������ֵ��";
	Input(e);
	t.Assign(p, e);
	t.Child(p, q, r);
	s=t.Parent(r);
	cout<<"��t�������Һ�����"<<t.Value(r)<<"����˫����"<<t.Value(s);
	f=t.Sibling(r, s, k);
	if(f)
	{
		if(!k)
			LR="��";
		else
			LR="��";
		cout<<"����"<<LR<<"�ֵ���"<<t.Value(s)<<endl;
	}
	fin.open("F4-2.txt");
	c.CreateBiTreeFromFile(fin);
	fin.close();
	cout<<"����������Ϊ�յĶ�����c������ǵݹ����������c��";
	c.InOrderTraverse(Visit);
	cout<<"����ݹ����������c��";
	c.OrderTraverse(c.Root(), Post, Visit);
	f=t.InsertChild(q, true, c);
	if(f)
	{
		cout<<endl<<"����ǵݹ���������Ķ�����t��";
		t.PreOrderTraverse(Visit);
		cout<<endl;
		cout<<"����ǵݹ���������Ķ�����t��";
		t.InOrderTraverse(Visit);
		cout<<"����ݹ���������Ķ�����c��";
		c.OrderTraverse(c.Root(), Pre, Visit);
	}
	f=t.DeleteChild(q, true);
	if(f)
	{
		cout<<endl<<"����ǵݹ����ɾ����Ķ�����t��";
		t.PostOrderTraverse(Visit);
		cout<<endl<<"����ݹ����ɾ����Ķ�����t��";
		t.OrderTraverse(t.Root(), In, Visit);
		cout<<endl<<"�������ɾ����Ķ�����t��";
		t.LevelOrderTraverse(Visit);
	}
}

