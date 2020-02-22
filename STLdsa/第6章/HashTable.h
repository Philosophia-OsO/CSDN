//HashTable.h ����ַ����ϣ���ࣨHashTable�ࣩ
#ifndef _HAXI_H_
#define _HAXI_H_
const int N=4;
const int hashsize[N]={11, 19, 37, 73};
//��ϣ������������һ�����ʵ��������У����أ�����ϣ���õ�
template<typename D>class HashTable
{
private:
	D *elem;
	int count, capacity;
	int sizeindex;
	vector<int>	rando;
	int Hash(KeyType Key)
	{
		return Key%capacity;
	}
	int Hash2(KeyType Key)
	{
		return Key%(capacity-2);
	}
	void Random()
	{
		list<int> ra;
		list<int>::iterator ip;
		int i, j;
		rando.assign(capacity-1, 0);
		for(i=0; i<capacity-1; i++)
			ra.push_back(i+1);
//		srand(time(0));//�������������
		for(i=0; i<capacity-1; i++)
		{
			j=rand()%(ra.size());
			ip=ra.begin();
			advance(ip, j);
			rando[i]=*ip;
			ra.erase(ip);
			cout<<"rando["<<i<<"]="<<rando[i]<<endl;
		}
	}
	int d(int i, KeyType Key)
	{
		switch(type)
		{
		case 0: return i;
		case 1: return ((i+1)/2)*((i+1)/2)*(int)pow(-1, i-1);
				
		case 2: return i*Hash2(Key);
		case 3: return rando[i-1];
		default:return i;
		}
	}
	void collision(KeyType Key, int &p, int i)
	{
		p=((Hash(Key)+d(i, Key))%capacity+capacity)%capacity;
	}
	void RecreateHashTable(D e)
	{
		int i, len=capacity;
		D *p=elem;
		sizeindex++;
		if(sizeindex<N)
		{
			capacity=hashsize[sizeindex];
			elem=new D[capacity];
			assert(elem!=NULL);
			count=0;
			for(i=0; i<capacity; i++)
				elem[i].key=EMPTY;
			if(type==3)
				Random();
			for(i=0; i<len; i++)
				if(p[i].key!=EMPTY && p[i].key!=TOMB)
					InsertHash(p[i]);
			delete[]p;
			InsertHash(e);
		}
	}
public:
	int type;
	HashTable()
	{
		count=0;
		sizeindex=0;
		capacity=hashsize[sizeindex];
		elem=new D[capacity];
		assert(elem!=NULL);
		for(int i=0; i<capacity; i++)
			elem[i].key=EMPTY;
		type=-1;
	}
	~HashTable()
	{
		if(elem!=NULL)
			delete[]elem;
	}
	bool SearchHash(KeyType Key, int &p, int &c)
	{
	 
	 
		if(Key==EMPTY || Key==TOMB)
			return false;
		int c1, tomb=-1;
		c=0;
		p=Hash(Key);
		while(elem[p].key==TOMB || elem[p].key!=EMPTY && !EQ(Key, elem[p].key))
		{
			if(elem[p].key==TOMB && tomb==-1)
			{
				tomb=p;
				c1=c;
			}
			c++;
			if(c<=hashsize[sizeindex]/2)
				collision(Key, p, c);
			else
				break;
		}
		if EQ(Key, elem[p].key)
			return true;
		else
		{
			if(tomb!=-1)
			{
				p=tomb;
				c=c1;
			}
			return false;
		}
	}
	bool InsertHash(D e)
	{
	 
		if(e.key==EMPTY || e.key==TOMB)
		{
			cout<<"�ؼ��ַǷ����޷������ϣ���У�����false��"<<endl;
			return false;
		}
		if(type==-1)
		{
			cout<<"������̽�鷨�����ͣ�0�����ԣ�1�����Σ�2��˫ɢ�У�3���������";
			cin>>type;
			if(type==3)
				Random();
		}
		int p, c;
		if(SearchHash(e.key, p, c))
			return false;
		else if(c<hashsize[sizeindex]/2)
		{
			elem[p]=e;
			count++;
			return true;
		}
		else
		{
			cout<<"����ϣ��ַ��˳������ؽ�ǰ�Ĺ�ϣ��"<<endl;
			TraverseHash(Visit);
			cout<<"�ؽ���ϣ��"<<endl;
			RecreateHashTable(e);
			return true;
		}
	}
	void CreateHashFromFile(string FileName)
	{
		D e;
		bool j;
		ifstream fin(FileName.c_str());
		while(InputFromFile(fin, e))
		{
			j=InsertHash(e);
			if(!j)
			{
				cout<<"��ϣ�������йؼ���Ϊ"<<e.key<<"�����ݣ��޷��ٲ�������";
				Visit(e);
			}
		}
		fin.close();
	}
	bool DeleteHash(KeyType Key, D &e)
	{
	 
		int p, c;
		if(SearchHash(Key, p, c))
		{
			e=elem[p];
			elem[p].key=TOMB;
			count--;
			return true;
		}
		else
			return false;
	}
	D GetElem(int i)const
	{
		return elem[i];
	}
	void TraverseHash(void(*visit)(int, D))const
	{
		int i;
		cout<<"��ϣ��ַ0��"<<capacity-1<<endl;
		for(i=0; i<capacity; i++)
			if(elem[i].key!=EMPTY && elem[i].key!=TOMB)
				visit(i, elem[i]);
	}
};
#endif

