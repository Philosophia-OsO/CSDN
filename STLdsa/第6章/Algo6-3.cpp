//Algo6-3.cpp ��֤BTree��ĳ�Ա����
#include "C.h"
#include "C4-1.h"
typedef int KeyType;
const int EMPTY=0;
#include "BTree.h"
#include "Func6-3.h"
void main()
{
	BTree<Record> t(3);
	const int j=4;
	Result u[j];
	KeyType k;
	t.CreateFromFile("F6-4.txt");
	t.Print(Out);
	cout<<"���ؼ��ֵ�˳�����B��t.root��"<<endl;
	t.Traverse(t.Root(), Out);
	cout<<endl;
	for(int i=0; i<j; i++)
	{
		cout<<"��������������ݵĹؼ��֣�";
		InputKey(k);
		u[i]=t.SearchBTree(k);
		cout<<"u["<<i<<"].i="<<u[i].i<<" u["<<i<<"].tag="<<boolalpha<<u[i].tag<<endl;
		if(u[i].tag)
			t.OutRecord(Out, u[i].pt->ki[u[i].i].index);
		else
			cout<<"δ�ҵ��ؼ���Ϊ"<<k<<"�����ݡ�"<<endl;
	}
	cout<<"�������ɾ�����ݵĹؼ��֣�";
	InputKey(k);
	Record r;
	bool f=t.DeleteBTree(r, k);
	if(f)
		Out(r);
	cout<<endl<<"���ؼ��ֵ�˳�����ɾ�����B��t.root��"<<endl;
	t.Traverse(t.Root(), Out);
	cout<<endl;
	t.Print(Out);
}

