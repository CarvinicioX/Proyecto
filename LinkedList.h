#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "TDAList.h"
#include "DLLNode.h"

class LinkedList:public TDAList {
protected:
	DLLNode* head;
public:
	LinkedList();
	virtual ~LinkedList();
	virtual bool insert(Object*, int);
	virtual Object* remove(unsigned);
	virtual Object* first()const ;
	virtual Object* last()const ;
	virtual int indexOf(Object*)const;
	virtual Object* get(unsigned)const;
	virtual bool isEmpty()const;
	virtual bool isFull()const ;
};

#endif