#include <stdio.h>

#include "lib/linked_list.hpp"

int main() {
	printf("Hi test-project!\n");

	linkedList<int> MyList;
	MyList.append(42);
	MyList.append(666);
	MyList.append(0xffffffff);

	link<int> *Ptr = MyList.Head;
	// printf("head: %d\n", Ptr->Data);
	// printf("next: %p\n", Ptr->Next);
	// printf("prev: %p\n", Ptr->Prev);
	while(Ptr) {
		printf("%d\n", Ptr->Data);
		Ptr = Ptr->Prev;
	}

	return 0;
}