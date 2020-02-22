//Main4-6.cpp ��֤��չ��SpTree<T>��ĳ�Ա����
#include "C.h"
#include "BiTNode.h"
#include "Func4-2.h"
#include "C4-1.h"
#include "SpTree.h"
void main()
{
	SpTree<T> t;
	T r;
	bool k;
	ifstream fin("F4-6.txt");
	while(!fin.eof())
	{
		if(InputFromFile(fin, r))
		{
			k=t.Insert(r);
			if(k)
			{
				cout<<"����ؼ���Ϊ"<<r.key<<"�Ľ������������չ��t��"<<endl;
				t.OrderTraverse(t.Root(), In, Visit);
				cout<<endl<<"���������չ��t��"<<endl;
				t.OrderTraverse(t.Root(), Pre, Visit);
				cout<<endl;
			}
			else
			{
				cout<<"��չ��t���Ѵ��ڹؼ���Ϊ"<<r.key<<"�����ݣ���(";
				cout<<r.key<<", "<<r.others<<")�޷����뵽t�С�"<<endl;
			}
		}
	}
	fin.close();
	for(int i=1; i<=2; i++)
	{
		cout<<"����������ҽ��Ĺؼ��ֵ�ֵ��";
		InputKey(r.key);
		k=t.Search(r.key);
		if(k)
			cout<<"�ҵ��ؼ���Ϊ"<<r.key<<"�Ľ������������չ��t��"<<endl;
		else
			cout<<"û�ҵ��ؼ���Ϊ"<<r.key<<"�Ľ������������չ��t��"<<endl;
		t.OrderTraverse(t.Root(), In, Visit);
		cout<<endl<<"���������չ��t��"<<endl;
		t.OrderTraverse(t.Root(), Pre, Visit);
		cout<<endl;
	}
	cout<<"�������ɾ�����Ĺؼ��ֵ�ֵ��";
	InputKey(r.key);
	k=t.BSDTree<T>::Delete(r.key);
	cout<<"ɾ���ؼ���Ϊ"<<r.key<<"�Ľ������������չ��t��"<<endl;
	t.OrderTraverse(t.Root(), In, Visit);
	cout<<endl<<"���������չ��t��"<<endl;
	t.OrderTraverse(t.Root(), Pre, Visit);
	cout<<endl;
}

