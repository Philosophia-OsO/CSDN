//Algo1-6.cpp ��STL��list��ʹ���Զ���������������
#include "C.h"
#include "Func1-2.h"
//��������������ע�͵�Func1-2.h�е�struct Student�ڶ����<��>����������
/*bool operator <(const Student &a, const Student &b)
{
	return a.score<b.score;
}
bool operator >(const Student &a, const Student &b)
{
	return a.score>b.score;
}*/
void main()
{
	list<Student> L;
	list<Student>::const_iterator it;
 	ifstream fin("F1-1.txt");
	Student e;
	while(!fin.eof())
		if(InputFromFile(fin, e))
			L.push_back(e);
	fin.close();
	cout<<"��L�ı�β���β����ļ�F1-1.txt�е����ݺ󣬱�L="<<endl;
	for(it=L.begin(); it!=L.end(); it++)
	   cout<<it->name<<' '<<it->score<<endl;
	L.sort();
//	L.sort(greater<Student>());//����
	cout<<"����������󣬱�L="<<endl;
	for(it=L.begin(); it!=L.end(); it++)
	   cout<<it->name<<' '<<it->score<<endl;
}

