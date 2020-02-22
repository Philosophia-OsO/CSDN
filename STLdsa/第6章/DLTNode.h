//DLTNode.h ˫���������Ĵ洢�ṹ
#ifndef _DLTNODE_H_
#define _DLTNODE_H_
enum NodeKind {LEAF, BRANCH};
struct DLTNode
{
	char symbol;
	NodeKind kind;
	union
	{
		int index;
		DLTNode *first;
	};
	DLTNode *next;
	DLTNode()
	{
		kind=BRANCH;
		first=next=NULL;
	}
};
#endif

