//Algo2-4.cpp �õݹ麯����⺺ŵ������
#include "C.h"
class HANOI
{
private:
	static int c;
	inline void move(int x, int z, int n)const
	{
		cout<<"��"<<++c<<"������"<<n<<"���̴�"<<x<<"���Ƶ�"<<z<<"��"<<endl;
	}
public:
	void hanoi(int n, int x, int y, int z)const
	{
		if(n==1)
			move(x, z, 1);
		else
		{
			hanoi(n-1, x, z, y);
			
			move(x, z, n);
			hanoi(n-1, y, x, z);
			
		}
	}
};
int HANOI::c=0;
void main()
{
	HANOI H;
	int n;
	cout<<"3������Ϊ1��2��3��Բ�������1��������2���Ƶ�3����������Բ������";
	cin>>n;
	H.hanoi(n, 1, 2, 3);
}

