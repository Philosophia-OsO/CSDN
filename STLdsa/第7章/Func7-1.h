//Func7-1.h ����ģ��<D>��ʵ��ID����Ӧ��I/O����
struct ID
{
	KeyType key;
	int order;
};
void Visit(ID &c)
{
	cout<<'('<<c.key<<", "<<c.order<<')';
}
bool InputFromFile(ifstream &f, ID &c)
{
	f>>c.key>>c.order;
	return f.good();
}
void PrintKey(ID &c)
{
		cout<<c.key<<' ';
}

