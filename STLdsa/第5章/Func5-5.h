//Func5-5.h ����AdjListGraph���л��ṹģ��<ArcT>��ʵ��A�������I/O����
struct A
{
	VRType weight;
};
void InputArc(bool direct, bool weight, V ver1, V ver2, A &arc)
{
	string s="��";
	if(direct)
		s="��";
	if(weight)
	{
		cout<<"������"<<ver1.name<<s<<ver2.name<<"��Ȩֵ��";
		cin>>arc.weight;
	}
}
void OutputArc(bool direct, bool weight, V ver1, V ver2, A arc)
{
	string s="��";
	if(direct)
		s="��";
	cout<<ver1.name<<s<<ver2.name;
	if(weight)
		cout<<"��"<<arc.weight;
	cout<<' ';
}
void InputArcFromFile(ifstream &f, A &arc)
{
}

