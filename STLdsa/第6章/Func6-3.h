//Func6-3.h ����ģ��<D>��ʵ��Record����Ӧ������KeyType����I/O����
struct Record
{
	KeyType key;
	int order;
};
void Out(Record c)
{
	cout<<'('<<c.key<<","<<c.order<<')';
}
bool InputFromFile(ifstream &f, Record &c)
{
	f>>c.key>>c.order;
	return f.good();
}
void InputKey(KeyType &k)
{
	cin>>k;
}

