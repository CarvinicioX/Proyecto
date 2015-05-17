#include "object.h"
#include "TDAList.h"
#include "LinkedList.h"
#include "DLLNode.h"
#include <iostream>
#include <cstdlib>

using std::cerr;
using std::endl;
using std::cout;

LinkedList::LinkedList(){
	head = NULL;
}

LinkedList::~LinkedList(){
	if (head) {
		delete head;
	}
}
