//Func5-4.h ����һ��MatrixGraph���л��ṹģ��<ArcT>��ʵ��A�������I/O����
const int INFINITY=INT_MAX;
struct A
{
	VRType adj;
	
	string message;
};
void InputArc(A &arc)
{
	cout<<"������˻���������Ϣ��";
	cin.ignore(1, '\n');
	getline(cin, arc.message);
}
void OutputArc(bool direct, V ver1, V ver2, A arc)
{
	string s="��";
	if(direct)
		s="��";
	cout<<ver1.name<<s<<ver2.name<<"��("<<arc.adj<<", "<<arc.message<<')'<<endl;
}
void InputArcFromFile(ifstream &f, A &arc)
{
	f.ignore(1, ' ');
	getline(f, arc.message);
}

