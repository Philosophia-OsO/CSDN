//Func7-2.h ����ģ��<T>��ʵ��Rec����Ӧ��I/O����
struct Rec
{
	string key;
	string translation;
};
bool InputFromFile(ifstream &f, Rec &c)
{
	f>>c.key;
	getline(f, c.translation);
	return f.good();
}
void Visit(Rec c)
{
	cout<<setiosflags(ios::left)<<setw(3)<<c.key<<c.translation<<endl;
}

