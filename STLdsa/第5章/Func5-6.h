//Func5-6.h ����һ��AdjListGraph���л��ṹģ��<ArcT>��ʵ��A�������I/O����
struct A
{
	VRType weight;
	string message;
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
	cout<<"������˻���������Ϣ��";
	cin.ignore(1, '\n');
	getline(cin, arc.message);
}
void OutputArc(bool direct, bool weight, V ver1, V ver2, A arc)
{
	string s="��";
	if(direct)
		s="��";
	cout<<ver1.name<<s<<ver2.name<<"��(";
	if(weight)
		cout<<arc.weight<<", ";
	cout<<arc.message<<") ";
}
void InputArcFromFile(ifstream &f, A &arc)
{
	f.ignore(1, ' ');
	getline(f, arc.message);
}

