//Algo6-2.cpp ��֤HashTable��ĳ�Ա����
#include "C.h"
#include "C4-1.h"
const int EMPTY=0;
const int TOMB=-1;
typedef int KeyType;
#include "HashTable.h"
#include "Func6-2.h"
void main()
{
	HashTable<HD> h;
	int n, p=0;
	bool j;
	HD e;
	KeyType k;
	h.CreateHashFromFile("F6-3.txt");
	cout<<"����ϣ��ַ��˳�������ϣ��"<<endl;
	h.TraverseHash(Visit);
	cout<<"��������������ݵĹؼ��֣�";
	InputKey(k);
	j=h.SearchHash(k, p, n);
	if(j)
		Visit(h.GetElem(p));
	else
		cout<<"δ�ҵ�"<<endl;
	if(h.type==1)
	{
		cout<<"�������ɾ�����ݵĹؼ��֣�";
		InputKey(k);
		j=h.DeleteHash(k, e);
		if(j)
		{
			cout<<"�ɹ�ɾ������";
			Visit(e);
		}
		cout<<"�������ݣ���������������ݵ�key order��";
		Input(e);
		h.InsertHash(e);
		cout<<"����ϣ��ַ��˳�������ϣ��"<<endl;
		h.TraverseHash(Visit);
	}
}

