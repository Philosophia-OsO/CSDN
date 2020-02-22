//Main3-3.cpp ��֤ϡ�����RLSMatrix��ĳ�Ա����
#include "C.h"
#include "RLSMatrix.h"
void main()
{
	bool f;
	RLSMatrix<int> A, B, C, D;
	A.MakeMatrixFromFile("F3-1.txt");
	B.MakeMatrixFromFile("F3-2.txt");
	C.MakeMatrixFromFile("F3-3.txt");
	cout<<"����A="<<endl;
	A.PrintSMatrix();
	cout<<"����B="<<endl;
	B.PrintSMatrix();
	cout<<"����C="<<endl;
	C.PrintSMatrix();
	D.CopySMatrix(A);
	cout<<"�ɾ���A���Ƶľ���D="<<endl;
	D.PrintSMatrix();
	D.ClearSMatrix();
	f=D.AddSMatrix(A, C);
	if(f)
	{
		cout<<"����D=A+C="<<endl;
		D.PrintSMatrix();
	}
	B.ClearSMatrix();
	f=B.SubtSMatrix(D, A);
	if(f)
	{
		cout<<"����B=D-A="<<endl;
		B.PrintSMatrix();
	}
	D.ClearSMatrix();
	D.TransposeSMatrix(C);
	cout<<"����D=C��ת��="<<endl;
	D.PrintSMatrix();
	A.ClearSMatrix();
	f=A.MultSMatrix(C, D);
	if(f)
	{
		cout<<"����A=C��D="<<endl;
		A.PrintSMatrix();
	}
}

