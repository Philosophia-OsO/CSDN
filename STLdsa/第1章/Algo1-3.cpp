//Algo1-3.cpp ��STL��ʹ���Զ�����������
#include "C.h"
#include "Func1-2.h"
bool cmp(Student a, Student b)
{
	return a.score<=b.score;
}
void main()
{
	vector<Student> a;
	vector<Student>::iterator ip;
	vector<Student>::const_iterator cip;
	ifstream fin("F1-1.txt");
	Student e;
	while(!fin.eof())
	{
		if(InputFromFile(fin, e))
			a.push_back(e);
	}
	fin.close();
	for(cip=a.begin(); cip!=a.end(); cip++)
		cout<<cip->name<<' '<<cip->score<<endl;
	ip=a.begin()+2;
	e.name="��Ӣ��";
	e.score=93;
	a.insert(ip, e);
	a.erase(a.begin()+4);
	cout<<"����ɾ����"<<endl;
	for(cip=a.begin(); cip!=a.end(); cip++)
		cout<<cip->name<<' '<<cip->score<<endl;
	cout<<"a.front()="<<a.front().name<<' '<<a.front().score<<endl;
	sort(a.begin(), a.end(), cmp);
	cout<<"���������������"<<endl;
	for(cip=a.begin(); cip!=a.end(); cip++)
		cout<<cip->name<<' '<<cip->score<<endl;
}

