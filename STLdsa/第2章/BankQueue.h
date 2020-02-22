//BankQueue.h ģ�����ж����¼��Ļ��ࣨBankQueue�ࣩ
#ifndef _BANKQUEUE_H_
#define _BANKQUEUE_H_
#include "LinkQueue.h"
class BankQueue
{
protected:
	struct QElemType
	{
		int ArrivalTime;
		int Duration;
	};
	struct Event
	{
		int OccurTime;
		int NType;
	};
	class cmp
	{
	public:
		bool operator()(const Event a, const Event b)const
		{
			return (a.OccurTime>b.OccurTime);
		}
	};
	int Qn, CustomerNum, CloseTime;
	int Khjg, Blsj;
	priority_queue<Event, vector<Event>, cmp> ev;
	Event en;
	long int TotalTime;
	virtual void CustomerArrived()=0;
	virtual void CustomerDeparture()=0;
	void Initialize()
	{
		TotalTime=0;
		CustomerNum=0;
		en.OccurTime=0;
		en.NType=Qn;
		ev.push(en);
	}
	void Random(int &d, int &i)
	{
		d=rand()%Blsj+1;
		i=rand()%(Khjg+1);
	}
	void Bank_Simulation()
	{
		while(!ev.empty())
		{
			en=ev.top();
			ev.pop();
			if(en.NType==Qn)
				CustomerArrived();
			else
				CustomerDeparture();
		}
		cout<<CustomerNum<<"�����пͻ�����ʱ��"<<TotalTime<<"����"<<endl;
		cout<<"ƽ��ÿ�˺�ʱ��"<<TotalTime/CustomerNum;
		cout<<"���ӣ����һ���ͻ��뿪��ʱ�䣺"<<en.OccurTime<<"��"<<endl;
	}
};
#endif

