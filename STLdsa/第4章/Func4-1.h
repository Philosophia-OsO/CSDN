//Func4-1.h ��������Ϊ�������͵�I/O����
void Visit(BiTNode<T> &c)
{
	cout<<c.data<<' ';
}
bool InputFromFile(ifstream &f, T &c)
{
	f>>c;
	return f.good();
}
void Input(T &c)
{
	cin>>c;
}

