//RBTNode.h ������Ľ�����ͽṹ��
#ifndef _RBTNODE_H_
#define _RBTNODE_H_
enum Color {Red, Black};
template<typename T>struct RBTNode
{
	T data;
	Color RB;
	RBTNode<T> *lchild, *rchild;
};
#endif

