//Algo3-1.cpp STL�еĴ�
#include "C.h"
void main()
{
	int i;
	char c, *p="God bye!", *q="God luck!";
	string t, s(p),r("Good luck!");
	cout<<"s="<<s<<endl;
	cout<<"r="<<r<<endl;
	string u(r);
	cout<<"u="<<u<<endl;
	t.assign(p);
	cout<<"t="<<t<<endl;
	cout<<"t�Ĵ���Ϊ"<<t.size()<<"��t�Ĵ洢����Ϊ"<<t.capacity()<<"�����շ�";
	cout<<boolalpha<<t.empty()<<endl;
	s.assign(q);
	cout<<"s="<<s<<endl;
	i=s.compare(t);
	if(i<0)
		c='<';
	else if(i==0)
		c='=';
	else
		c='>';
	cout<<"��s"<<c<<"��t"<<endl;
	r=t+s;
	cout<<"r=t+s="<<r<<endl;
	s="oo";
	t="o";
	i=-2;
	while(true)
	{
		i=r.find(t, i+2);
		if(i>=0)
			r.replace(i, 1, s);
		else
			break;
	}
	cout<<"r="<<r<<endl;
	s.erase();
	cout<<"s��պ󣬴���Ϊ"<<s.size()<<"�����շ�";
	cout<<boolalpha<<s.empty()<<endl;
	s=r.substr(5, 4);
	cout<<"��sΪ�Ӵ�r��[5]���4���ַ���s="<<s<<endl;
	t=r;
	cout<<"�ɴ�r���Ƶô�t��t="<<t<<endl;
	t.insert(5, s);
	cout<<"�ڴ�t��[5]ǰ���봮s�󣬴�t="<<t<<endl;
	t.erase(0, 5);
	cout<<"�Ӵ�t��[0]��ɾ��5���ַ���t="<<t<<endl;
}

