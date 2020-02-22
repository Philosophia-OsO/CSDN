//Algo6-5.cpp ��֤TrieTree��ĳ�Ա����
#include "C.h"
const char Empty='$';
typedef string KeyType;
#include "TrieTree.h"
#include "Func6-3.h"
void main()
{
	TrieTree<Record> t;
	int i;
	string key;
	Record r;
	t.CreateFromFile("F6-5.txt");
	t.TraverseTrie(t.Root(), Out);
	cout<<endl;
	t.Print(Out);
	cout<<"����������ҵĹؼ��ַ�����";
	InputKey(key);
	i=t.SearchTrie(key);
	if(i!=-1)
		t.OutRecord(Out, i);
	else
		cout<<"�����ڹؼ���Ϊ"<<key<<"������";
	for(i=0; i<3; i++)
	{
		cout<<endl<<"�������ɾ���Ĺؼ��ַ�����";
		InputKey(key);
		if(t.DeleteTrie(key, r))
		{
			cout<<"ɾ���ɹ�����ֵΪ";
			Out(r);
		}
		else
			cout<<"ɾ��ʧ�ܣ�";
	}
	r.key="LIN";
	r.order=17;
	t.InsertTrie(r);
	cout<<endl<<"���ؼ��ַ�����˳�����ɾ����������t��"<<endl;
	t.TraverseTrie(t.Root(), Out);
	cout<<endl;
	t.Print(Out);
}

