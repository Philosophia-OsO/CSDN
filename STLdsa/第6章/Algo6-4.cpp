//Algo6-4.cpp ��֤DLTree��ĳ�Ա����
#include "C.h"
const char Empty='$';
//����ʱ�ؼ����в��ɰ���'$'��'$'Ҫ�����п��ܵ��ַ���ASCII��С��
typedef string KeyType;
#include "DLTree.h"
#include "Func6-3.h"
void main()
{
	int i;
	string key;
	DLTree<Record> t;
	Record r;
	t.CreateFromFile("F6-5.txt");
	t.TraverseDLTree(t.Root(), Out);
	cout<<endl;
	t.Print(Out);
	cout<<"����������ҵĹؼ��ַ�����";
	InputKey(key);
	i=t.SearchDLTree(key);
	if(i>-1)
		t.OutRecord(Out, i);
	for(i=0; i<3; i++)
	{
		cout<<endl<<"�������ɾ���Ĺؼ��ַ�����";
		InputKey(key);
		if(t.DeleteDLTree(key, r))
		{
			cout<<"ɾ���ɹ�����ֵΪ";
			Out(r);
		}
		else
			cout<<"ɾ��ʧ�ܣ�";
	}
	cout<<endl;
	t.TraverseDLTree(t.Root(), Out);
	cout<<endl;
	t.Print(Out);
}

