//Algo6-1.cpp ��֤SqTable��ĳ�Ա����
#include "C.h"
#include "C4-1.h"
typedef long KeyType;
#include "SqTable.h"
#include "Func6-1.h"
KeyType key;
bool cmp(Sc e)
{
	return e.number==key;
}
void main()
{
	int j, k;
	SqTable<Sc> st[2];
	Sc e;
	string s="F6-1.txt";
	for(int i=0; i<2; i++)
	{
		s[3]=i+'1';
		st[i].Create_SeqFromFile(s);
		cout<<"׼��֤��  ����  ���� ���� ��ѧ ���� �ܷ�"<<endl;
		st[i].Traverse(Total);
		st[i].Traverse(Visit);
		cout<<"������������˵Ŀ��ţ�";
		InputKey(key);
		if(i==0)
		{
			cout<<"�����������������ҷ�������ţ�0��2����";
			cin>>k;
			j=st[i].Search_Seq(key, k);
		}
		else
			j=st[i].Search_Bin(key);
//			j=st[i].Search_Bin1(key);//��st[i]���۰���Һ��йؼ���key�����ţ���Ч��
		if(j>=0)
		{
			st[i].GetElem(j, e);
			Visit(e);
		}
	}
}

