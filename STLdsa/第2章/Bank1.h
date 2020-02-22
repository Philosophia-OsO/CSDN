//Bank1.h ģ�������Ŷӻ��¼����ࣨBank1�ࣩ
#ifndef _BANK1_H_
#define _BANK1_H_
#include "BankQueue.h"
class Bank1:public BankQueue
{
private:
	LinkQueue<QElemType> q;
	vector<bool> chk;
	vector<QElemType> customer;
	int ChuangKou()
	{
		for(int i=0; i<Qn; i++)
			if(chk[i])
				return i;
		return Qn;
	}
	void CustomerArrived()
	{
		Event e;
		QElemType f;
		int DurationTime, IntervalTime, i;
		
		CustomerNum++;
		Random(DurationTime, IntervalTime);
		
		e.OccurTime=en.OccurTime+IntervalTime;
		
		e.NType=Qn;
		if(e.OccurTime<CloseTime)
			ev.push(e);
		f.ArrivalTime=en.OccurTime;
		f.Duration=DurationTime;
		q.EnQueue(f);
		i=ChuangKou();
		if(i<Qn)
		{
			q.DeQueue(customer[i]);
			
			e.OccurTime=en.OccurTime+customer[i].Duration;
			e.NType=i;
			ev.push(e);
			chk[i]=false;
		}
	}
	void CustomerDeparture()
	{
		Event e;
		int i;
		i=en.NType;
		chk[i]=true;
		TotalTime+=en.OccurTime-customer[i].ArrivalTime;
		
		if(!q.QueueEmpty())
		{
			q.DeQueue(customer[i]);
			
			chk[i]=false;
			e.OccurTime=en.OccurTime+customer[i].Duration;
			
			e.NType=i;
			ev.push(e);
		}
	}
public:
	void Bank(int n=2, int k=480, int i=8, int j=20)
	{
	 
		Qn=n;
		CloseTime=k;
		Khjg=i;
		Blsj=j;
		cout<<"�����ڵ���Ŀͻ���ʱ������0��"<<Khjg;
		cout<<"���ӣ�ÿ���ͻ�����ҵ���ʱ�䣺1��"<<Blsj<<"����"<<endl;
		cout<<"��������"<<Qn<<"��Ӫҵʱ����"<<CloseTime<<"���ӣ��ͻ�������";
		Initialize();
		chk.assign(Qn, true);
		customer.assign(Qn);
		Bank_Simulation();
	}
};
#endif

