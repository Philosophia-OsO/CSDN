//Func5-3.h ����һ�ֶ���ṹģ��<VerT>��ʵ��V�������I/O����
struct V
{
	string name;
	int size;
};
void Visit(V ver)
{
	cout<<'('<<ver.name<<", "<<ver.size<<")";
}
void InputVertex(V &ver)
{
	cin>>ver.name>>ver.size;
}
void InputVertexFromFile(ifstream &f, V &ver)
{
	f>>ver.name>>ver.size;
}
void InputVertexNameFromFile(ifstream &f, V &ver)
{
	f>>ver.name;
}

