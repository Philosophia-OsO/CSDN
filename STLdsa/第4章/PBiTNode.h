//PBiTNode.h ��ָ�����������ͽṹ��
#ifndef _PBITNODE_H_
#define _PBITNODE_H_
template<typename T>struct PBiTNode
{
	T data;
	PBiTNode<T> *lchild, *rchild, *parent;
};
#endif

