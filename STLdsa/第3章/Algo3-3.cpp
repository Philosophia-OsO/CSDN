//Algo3-3.cpp ����ʵ��BM�㷨�ĳ���
#include "C.h"
#include "HString.h"
const int N=256;
template<typename T>class BMMatching
{
private:
	vector<int> BC, GS, SS;
	int p;
	void buildBC(T P)
	{
		BC.assign(N, -1);
		for(int j=0; j<p; j++)
			BC[(unsigned char)P[j]]=j;
	}
	void buildSS(T P)
	{
		SS.assign(p);
		SS[p-1]=p;
		
		for(int lo=p-1, hi=p-1, j=lo-1; j>=0; j--)
			if(lo<j && SS[p-hi+j-1]<=j-lo)
				SS[j]=SS[p-hi+j-1];
			else
			{
				hi=j;
				lo=__min(lo, hi);
				while(0<=lo && P[lo]==P[p-hi+lo-1])
					lo--;
				SS[j]=hi-lo;
			}
	}
	void buildGS(T P)
	{
		int i, j;
		buildSS(P);
		GS.assign(p, p);
		for(i=0, j=p-1; j>=0; j--)
		{
			if(j+1==SS[j])
				while(i<p-j-1)
					GS[i++]=p-j-1;
		}
		for(j=0; j<p-1; j++)
			GS[p-SS[j]-1]=p-j-1;
		cout<<"GS=";
		for(i=0; i<p; i++)
			cout<<GS[i]<<' ';
		cout<<endl;
	}
public:
	int match(T P, T Q, int pos, bool Bad, bool Good)
	{
		if(Bad || Good)
		{
			p=P.size();
			if(Bad)
				buildBC(P);
			if(Good)
				buildGS(P);
			int i=pos;
			while(Q.size()>=i+p)
			{
				int j=p-1;
				while(P[j]==Q[i+j])
					if(--j<0)
						break;
				if(j<0)
					break;
				else
				{
					int B=INT_MIN, G=INT_MIN;
					if(Bad)
						B=__max(1, j-BC[(unsigned char)Q[i+j]]);
						
					if(Good)
						G=GS[j];
					i+=__max(G, B);
					cout<<"i="<<i<<endl;
				}
			}
			return i;
		}
		return Q.size();
	}
};
void main()
{
	typedef string T;
//	typedef HString T;
	BMMatching<T> BM;
	T P="dcabcaabc", Q="asdrcabdcabcaabcytu";
	cout<<"������"<<Q<<" �Ӵ���"<<P<<endl;
	int index, pos=1;
	bool B, G;
	for(int flag=0; flag<3; flag++)
	{
		B=false, G=false;
		switch(flag)
		{
		case 0:	B=true; cout<<"���ַ���"<<endl; break;
		case 1: G=true; cout<<"�ú�׺��"<<endl; break;
		case 2: B=true; G=true; cout<<"���ַ��Ӻú�׺��"<<endl; break;
		}
		index=BM.match(P, Q, pos, B, G);
		if(Q.size()<index+P.size())
			cout<<"��["<<pos<<"]��ʼ��������ģʽ��ƥ�䲻�ɹ���"<<endl;
		else
			cout<<"��["<<pos<<"]��ʼ��������["<<index<<"]��ģʽ���״�ƥ�䡣"<<endl;
	}
}

