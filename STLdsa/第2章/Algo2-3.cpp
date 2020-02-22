//Algo2-3.cpp �������ʽ��ֵ�����븺��Ҫ��(0-����)��ʾ
#include "C.h"
#include "SqStack.h"
template<typename T>class Evaluate
{
private:
	char Precede(char t1, char t2)
	{
		char f;
		switch(t2)
		{
		case'+':
		case'-':if(t1=='(' || t1=='#')
					f='<';
				else
					f='>';
				break;
		case'*':
		case'/':if(t1=='*' || t1=='/' || t1==')')
					f='>';
				else
					f='<';
				break;
		case'(':if(t1==')')
				{
					cout<<"���Ų�ƥ��"<<endl;
					exit(1);
				}
				else
					f='<';
				break;
		case')':switch(t1)
				{
				case'(':f='=';
						break;
				case'#':cout<<"ȱ��������"<<endl;
						exit(1);
				default:f='>';
				}
				break;
		case'#':switch(t1)
				{
				case'#':f='=';
						break;
				case'(':cout<<"ȱ��������"<<endl;
						exit(1);
				default:f='>';
				}
		}
		return f;
	}
	bool In(char c)
	{
		switch(c)
		{
		case'+':
		case'-':
		case'*':
		case'/':
		case'(':
		case')':
		case'#':return true;
		default:return false;
		}
	}
	T Operate(T a, char theta, T b)
	{
		switch(theta)
		{
		case'+':return a+b;
		case'-':return a-b;
		case'*':return a*b;
		default:return a/b;
		}
	}
public:
	T Expression(string FileName, bool flag)
	{
		SqStack<char>OPTR(10);
		SqStack<T>OPND(10);
		string s;
		ifstream fin(FileName.c_str());
		fin>>s;
		T a, b, d;
		int i=0;
		char c, x;
		OPTR.Push('#');
		if(flag)
			cout<<"�����ָ��ŵ������������ʽ����������"<<s;
		else
			cout<<"���Գ��ָ��ź�С�����������ʽ����������"<<s;
		s=s+'#';
		c=s[i++];
		OPTR.GetTop(x);
		while(c!='#' || x!='#')
		{
			if(In(c))
			{
				if(!flag)
					if(c=='-' && i==1 || c=='(' && s[i]=='-')
						OPND.Push(0);
				switch(Precede(x, c))
				{
				case'<':OPTR.Push(c);
						if(i<s.length())
							c=s[i++];
						break;
				case'=':OPTR.Pop(x);
						if(i<s.length())
							c=s[i++];
						break;
				case'>':OPTR.Pop(x);
						OPND.Pop(b);
						OPND.Pop(a);
						d=Operate(a, x, b);
						OPND.Push(d);
				}
			}
			else
			{
				if(c>='0' && c<='9')
				{
					d=0;
					while(c>='0' && c<='9')
					{
						d=d*10+c-'0';
						if(i<s.length())
						{
							c=s[i++];
							if(!flag)
								if(c=='.')
								{
									int n=10;
									c=s[i++];
									while(c>='0' && c<='9')
									{
										d=d+((double)(c-'0'))/n;
										n=n*10;
										if(i<s.length())
											c=s[i++];
									}
								}
						}
					}
					OPND.Push(d);
				}
				else
				{
					cout<<"���ַǷ��ַ�"<<endl;
					exit(1);
				}
			}
			OPTR.GetTop(x);
		}
		OPND.Pop(a);
		if(!OPND.StackEmpty())
		{
			cout<<"���ʽ����ȷ"<<endl;
			exit(1);
		}
		return a;
	}
};
void main()
{
	Evaluate<int> eint;
	Evaluate<double> edouble;
	cout<<'='<<eint.Expression("F2-1.txt", true)<<endl;
	cout<<'='<<edouble.Expression("F2-2.txt", false)<<endl;
}

