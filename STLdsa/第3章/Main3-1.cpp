//Main3-1.cpp ��֤��HString��ĳ�Ա����
#include "C.h"
#include "HString.h"
void main()
{
	int i;
	char c, *p="God bye!", *q="God luck!";
	HString t, s(p),r("Good luck!");
	cout<<"��sΪ"<<s<<endl;
	cout<<"s[4]="<<s[4]<<endl;
	cout<<"��rΪ";
	r.Output(cout);
	HString u(r);
	cout<<endl<<"��uΪ"<<u<<endl;
	t.StrAssign(p);
	cout<<"��tΪ"<<t<<endl;
	cout<<"t�Ĵ���Ϊ"<<t.size()<<"�����շ�";
	cout<<boolalpha<<t.StrEmpty()<<endl;
	s.StrAssign(q);
	cout<<"��sΪ"<<s<<endl;
	i=s.StrCompare(t);
	if(i<0)
		c='<';
	else if(i==0)
		c='=';
	else
		c='>';
	cout<<"��s"<<c<<"��t"<<endl;
	r.Concat(t, s);
	cout<<"��t���Ӵ�s�����Ĵ�rΪ"<<r<<endl;
	s.StrAssign("oo");
	cout<<"��sΪ"<<s<<endl;
	t.StrAssign("o");
	cout<<"��tΪ"<<t<<endl;
	r.Replace(t, s);
	cout<<"�Ѵ�r�кʹ�t��ͬ���Ӵ��ô�s����󣬴�rΪ"<<r<<endl;
	s.ClearString();
	cout<<"��s��պ󣬴���Ϊ"<<s.size()<<"�����շ�";
	cout<<boolalpha<<s.StrEmpty()<<endl;
	s=r.substr(5, 4);
	cout<<"��sΪ�Ӵ�r��[5]���4���ַ�������Ϊ"<<s.size()<<"����sΪ"<<s<<endl;
	t.StrCopy(r);
	cout<<"�ɴ�r���Ƶô�t����tΪ"<<t<<endl;
	t.StrInsert(5, s);
	cout<<"�ڴ�t��[5]ǰ���봮s�󣬴�tΪ"<<t<<endl;
	t.StrDelete(0, 5);
	cout<<"�Ӵ�t��[0]��ɾ��5���ַ��󣬴�tΪ"<<t<<endl;
	cout<<t.Index(s, 0)<<"�ǴӴ�t��[0]�𣬺ʹ�s��ͬ�ĵ�һ���Ӵ�����ʼλ��"<<endl;
	cout<<t.Index(s, 1)<<"�ǴӴ�t��[1]�𣬺ʹ�s��ͬ�ĵ�һ���Ӵ�����ʼλ��"<<endl;
}

