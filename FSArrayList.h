#ifndef TDAARRAYLIST_H
#define TDAARRAYLIST_H
#include "TDAList.h"

class FSArrayList:public TDAList {
	Object** Datos;
	int Capacidad;
public:
	FSArrayList(int);
	virtual ~FSArrayList();
	virtual bool insert(Object*, int);
	virtual Object* remove(unsigned);
	virtual Object* first()const;
	virtual Object* last()const;
	virtual int indexOf(Object*)const;
	virtual Object* get(unsigned)const;
	virtual bool isEmpty()const;
	virtual bool isFull()const;
};

#endif