//CSNode.h ����-�ֵܶ������������ͽṹ��
#ifndef _CSNODE_H_
#define _CSNODE_H_
template<typename T>struct CSNode
{
	T data;
	CSNode<T> *firstchild, *nextsibling;
	
};
#endif

