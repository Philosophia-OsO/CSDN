//Algo2-6.cpp �õݹ麯���ͷǵݹ麯�����ʺ�����
#include "C.h"
class QUEUE
{
private:
	int N;
	vector<int> solution;
	vector<vector<int> > MarkArray;
	ofstream fout;
	void Init(int n)
	{
		N=n;
		solution.assign(N);
		MarkArray.assign(N);
		for(int i=0; i<N; i++)
			MarkArray[i].assign(N, -1);
	}
	void Recursion(int m, int &number)
	{
		if(m<N)
			for(int i=0; i<N; i++)
			{
				if(MarkArray[m][i]==-1)
				{
					solution[m]=i;
					Mark(m, i, true);
					Recursion(m+1, number);
					Mark(m, i, false);
				}
			}
		else
			PutOutToFile(++number);
	}
	void Mark(int m, int i, bool flag)
	{
		int j, n, k;
		if(flag)
		{
			j=-1;
			n=m;
		}
		else
		{
			j=m;
			n=-1;
		}
		for(k=m+1; k<N; k++)
		{
			if(MarkArray[k][i]==j)
				MarkArray[k][i]=n;
			if((k+i-m)>=0 && (k+i-m)<N && MarkArray[k][k+i-m]==j)
				MarkArray[k][k+i-m]=n;
			if((i+m-k)>=0 && (i+m-k)<N && MarkArray[k][(i+m-k)]==j)
				MarkArray[k][i+m-k]=n;
		}
	}
	void PutOutToFile(int number)
	{
		int i, j;
		fout<<"��"<<number<<"��"<<endl;
		fout<<"solution[]=";
		for(j=0; j<N; j++)
			fout<<solution[j]<<' ';
		fout<<endl<<"����solution[]������ʺ��������е�λ�ã�"<<endl;
		for(j=0; j<N; j++)
		{
			for(i=0; i<N; i++)
				if(i==solution[j])
					fout<<" Q";
				else
					fout<<" X";
			fout<<endl;
		}
	}
public:
	void NoRecursion(int n, string FileName)
	{
		Init(n);
		int number=0, i=0, j=0;
		fout.open(FileName.c_str(), ios::out);
		fout<<"�ǵݹ����"<<N<<"�ʺ���������н⣺"<<endl;
		while(i>=0)
		{
			while(j<N)
			{
				if(MarkArray[i][j]==-1)
					break;
				j++;
			}
			if(j<N)
			{
				solution[i]=j;
				Mark(i, j, true);
				if(i==N-1)
				{
					PutOutToFile(++number);
					Mark(i, j, false);
					i--;
					j=solution[i];
					Mark(i, j, false);
					j++;
				}
				else
					i++, j=0;
			}
			else
			{
				i--;
				if(i>=0)
				{
					j=solution[i];
					Mark(i, j, false);
					j++;
				}
			}
		}
		fout.close();
		cout<<N<<"�ʺ����⹲��"<<number<<"���⣬�����ļ�"<<FileName<<"�С�"<<endl;
	}
	void Recursion(int n, string FileName)
	{
		Init(n);
		fout.open(FileName.c_str(), ios::out);
		fout<<"�ݹ����"<<N<<"�ʺ���������н⣺"<<endl;
		int number=0;
		Recursion(0, number);
		fout.close();
		cout<<N<<"�ʺ����⹲��"<<number<<"���⣬�����ļ�"<<FileName<<"�С�"<<endl;
	}
};
void main()
{
	QUEUE q;
	q.NoRecursion(4, "Queen0.txt");
	q.Recursion(5, "Queen1.txt");
}

