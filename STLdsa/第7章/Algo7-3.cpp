//Algo7-3.cpp ��ѡ��������
#include "C.h"
#include "C4-1.h"
typedef int KeyType;
#include "SqTable.h"
template<typename D>class SelSort:public SqTable<D>
{
private:
	int SelectKey(int i, bool bMaxOrMin, bool bFlag)
	{
		int j, k=i;
		KeyType maxOrmin=elem[i].key;
		if (bFlag)
		{
			for(j=i+1; j<elem.size(); j++)
				if (bMaxOrMin && LT(elem[j].key, maxOrmin) || !bMaxOrMin && GT(elem[j].key, maxOrmin))
				{
					k=j;
					maxOrmin=elem[j].key;
				}
		}
		else
			for(j=i-1; j>=0; j--)
				if (bMaxOrMin && LT(elem[j].key, maxOrmin) || !bMaxOrMin && GT(elem[j].key, maxOrmin))
				{
					k=j;
					maxOrmin=elem[j].key;
				}
		return k;
	}
public:
	void SelectSort(bool bOrder = true, bool bFlag = true)
	{
		int i, j;
		if (bFlag)
			for(i=0; i<elem.size()-1; i++)
			{
				j=SelectKey(i, bOrder, bFlag);
				if(i!=j)
					swap(elem[i], elem[j]);
			}
		else
			for(i=elem.size()-1; i>0; i--)
			{
				j=SelectKey(i, !bOrder, bFlag);
				if(i!=j)
					swap(elem[i], elem[j]);
			}
	}
};
#include "Func7-1.h"
void main()
{
	SelSort<ID> ss[4];
	for(int i=0; i<4; i++)
		ss[i].Create_SeqFromFile("F7-1.txt");
	cout<<"����ǰ��"<<endl;
	ss[0].Traverse(Visit);
	ss[0].SelectSort(true, true);
	cout<<endl<<"������ǰһ�����ȵ�λ����ѡ�������"<<endl;
	ss[0].Traverse(Visit);
	ss[1].SelectSort(true, false);
	cout<<endl<<"�������һ�����ȵ�λ����ѡ�������"<<endl;
	ss[1].Traverse(Visit);
	ss[2].SelectSort(false, true);
	cout<<endl<<"������ǰһ�����ȵ�λ����ѡ�������"<<endl;
	ss[2].Traverse(Visit);
	ss[3].SelectSort(false, false);
	cout<<endl<<"�������һ�����ȵ�λ����ѡ�������"<<endl;
	ss[3].Traverse(Visit);
	cout<<endl;
}

