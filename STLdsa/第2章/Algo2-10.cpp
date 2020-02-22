//Algo2-10.cpp STL�����ȶ��е�Ӧ��
#include "C.h"
#include "PosType.h"
class cmp
{
public:
	bool operator()(const PosType a, const PosType b)const
	{
		return a.row>b.row;
//		return a.row<b.row;//��PosType��row��������
	}
};
void main()
{
	PosType p[]={{3, 4}, {5, 6}, {4, 1}}, q;
	priority_queue<PosType, vector<PosType>, cmp> pri_queue;
//	priority_queue<PosType, deque<PosType>, cmp> pri_queue;//����Ϊ˫�˶���
	
	for(int i=0; i<3; i++)
		pri_queue.push(p[i]);
	cout<<"���ȶ���Ԫ����="<<pri_queue.size()<<endl;
	while(!pri_queue.empty())
	{
		q=pri_queue.top();
		cout<<'('<<q.row<<", "<<q.col<<") ";
		pri_queue.pop();
	}
	cout<<endl;
}

