//Algo3-5.cpp �䳤������������ʵ�θ����ɱ䣩���ʾ��
#include "C.h"
typedef int T;
T Max(int num, ...)
{
	va_list ap;
	T m, n;
	assert(num>0);
	va_start(ap, num);
	m=va_arg(ap, T);
	for(int i=1; i<num; i++)
	{
		n=va_arg(ap, T);
		if(m<n)
			m=n;
	}
	va_end(ap);
	return m;
}
void main()
{
	cout<<"1.���ֵΪ"<<Max(4, 7, 9, 5, 8)<<endl;
	cout<<"2.���ֵΪ"<<Max(3, 17, 36, 25)<<endl;
}

