//Main4-7.cpp ��֤����-�ֵܶ�������ṹ������ɭ��CSTree<T>��ĳ�Ա����
#include "C.h"
#include "CSTree.h"
#define BiTNode CSNode
typedef char T;
T Nil='#';
#include "Func4-1.h"
void main()
{
	int i;
	CSTree<T> t, p;
	cout<<"��t�շ�"<<boolalpha<<t.TreeEmpty()<<"���������Ϊ"<<t.TreeDepth(t.Root());
	CSNode<T> *q;
	T e, e1;
	string FileName="F4-7.txt";
	t.CreateTreeFromFile(FileName);
	cout<<endl<<"���ļ�"<<FileName<<"������t����t�շ�"<<boolalpha<<t.TreeEmpty();
	cout<<endl<<"����Ϊ"<<t.Value(t.Root())<<"���������Ϊ";
	cout<<t.TreeDepth(t.Root())<<endl<<"���������t��";
	t.LevelOrderTraverse(Visit);
	cout<<endl<<"��������޸ĵĽ���ֵ ��ֵ��";
	cin>>e>>e1;
	t.Assign(t.Point(e), e1);
	cout<<"��������޸ĺ����t��";
	t.LevelOrderTraverse(Visit);
	cout<<endl<<e1<<"��˫����"<<t.Parent(e1)<<"��������"<<t.LeftChild(e1);
	cout<<"����һ���ֵ���"<<t.RightSibling(e1)<<endl;
	FileName="F4-8.txt";
	p.CreateTreeFromFile(FileName);
	cout<<"���ļ�"<<FileName<<"������p�󣬲��������p��"<<endl;
	p.LevelOrderTraverse(Visit);
	cout<<endl<<"����p�嵽��t�У�������t��p��˫�׽�� ������ţ�";
	cin>>e>>i;
	q=t.Point(e);
	t.InsertChild(q, i, p);
	cout<<"���������������t��";
	t.LevelOrderTraverse(Visit);
	cout<<endl<<"�ȸ�������������t��";
	t.PreOrderTraverse(t.Root(), Visit);
	cout<<endl<<"���������������t��";
	t.PostOrderTraverse(t.Root(), Visit);
	cout<<endl<<"���������������p��";
	p.LevelOrderTraverse(Visit);
	cout<<endl<<"ɾ����t�н��e�ĵ�i��������������e i��";
	cin>>e>>i;
	q=t.Point(e);
	t.DeleteChild(q, i);
	cout<<"�������ɾ�������t��"<<endl;
	t.LevelOrderTraverse(Visit);
	cout<<endl;
}

