//Func4-2.cpp �����������ͺ͹ؼ������ͼ������ǵ�I/O����
typedef int KeyType;
struct T
{
	KeyType key;
	int others;
};
void Visit(BiTNode<T> &c)
{
	cout<<'('<<c.data.key<<", "<<c.data.others<<')';
}
bool InputFromFile(ifstream &f, T &c)
{
	f>>c.key>>c.others;
	return f.good();
}
void InputKey(KeyType &k)
{
	cin>>k;
}

