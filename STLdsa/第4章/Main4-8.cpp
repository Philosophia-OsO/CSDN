//Main4-8.cpp ��CSTree<T>�๹��ɭ��
#include "C.h"
#include "CSTree.h"
#define BiTNode CSNode
typedef char T;
#include "Func4-1.h"
void main()
{
	CSTree<T>t;
	string FileName="F4-9.txt";
	t.CreateTreeFromFile(FileName);
	cout<<"���ļ�"<<FileName<<"����ɭ��t��ɭ�ֵ���ȣ����������������������ȣ�Ϊ";
	cout<<t.TreeDepth(t.Root())<<endl<<"�������ɭ��t��";
	t.LevelOrderTraverse(Visit);
	cout<<endl<<"�ȸ�����ɭ��t��";
	t.PreOrderTraverse(t.Root(), Visit);
	cout<<endl<<"�������ɭ��t��";
	t.PostOrderTraverse(t.Root(), Visit);
	cout<<endl;
}

