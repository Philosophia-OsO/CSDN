//Algo7-10.cpp STL�����㷨��Ӧ��1
#include "C.h"
typedef int KeyType;
#include "Func7-1.h"
bool cmp(ID a, ID b)
{
	return a.key<b.key;
}
void main()
{
	vector<ID> a;
	vector<ID>::iterator ip;
	ID e;
	ifstream fin("F7-1.txt");
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
	cout<<endl<<"�����"<<endl;
	for(ip=a.begin(); ip!=a.end(); ip++)
		Visit(*ip);
	cout<<endl;
}

