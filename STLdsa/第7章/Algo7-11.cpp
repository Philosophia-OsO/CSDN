//Algo7-11.cpp STL�����㷨��Ӧ��2
#include "C.h"
#include "Func7-2.h"
bool cmp(Rec a, Rec b)
{
	return a.key<b.key;
}
void main()
{
	vector<Rec> a;
	vector<Rec>::iterator ip;
	Rec e;
	ifstream fin("F7-2.txt");
	while(!fin.eof())
	{
		if(InputFromFile(fin, e))
			a.push_back(e);
	}
	fin.close();
	cout<<"����ǰ��"<<endl;
	for(ip=a.begin(); ip!=a.end(); ip++)
		Visit(*ip);
	sort(a.begin(), a.end(), cmp);
	cout<<"�����"<<endl;
	for(ip=a.begin(); ip!=a.end(); ip++)
		Visit(*ip);
	cout<<endl;
}

