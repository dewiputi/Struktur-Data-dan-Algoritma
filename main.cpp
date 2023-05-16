#include <iostream>
#include "Linkedlist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		LinkedList list1;
	
	list1.insertToHead(30);
	list1.insertToHead(50);
	list1.insertToTail(89);
	list1.deleteFromTail();
	list1.deleteByValue(50);
	
	list1.printAll();
	

	return 0;
}