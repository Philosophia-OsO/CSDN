//PosType.h ��ά����λ�����ͽṹ�弰���ص������
#ifndef _POSTYPE_H_
#define _POSTYPE_H_
struct PosType
{
	int row, col;
};
PosType operator+(const PosType p1, const PosType p2)
{
	PosType p;
	p.row=p1.row+p2.row;
	p.col=p1.col+p2.col;
	return p;
}
bool operator==(const PosType p1, const PosType p2)
{
	return p1.row==p2.row && p1.col==p2.col;
}
#endif

