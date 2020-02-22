//Func1-2.h ����ģ��<T>��ʵ��Student�������I/O����
struct Student
{
	string name;
	int score;
	
 	bool operator <(const Student &s)const
	{
		return score<s.score;
	}
	bool operator >(const Student &s)const
	{
		return score>s.score;
	}
};
inline void printSt(Student &c)
{
	cout<<endl<<setw(6)<<c.name<<"��"<<c.score;
}
inline void printName(Student &c)
{
	cout<<c.name;
}
bool equal(Student c1, Student c2)
{
	return c1.name==c2.name;
}
bool InputFromFile(ifstream &f, Student &c)
{
	f>>c.name>>c.score;
	return f.good();
}

