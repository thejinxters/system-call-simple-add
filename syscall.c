#include <stdio.h>


main () {
	// Simple_add System Call Test
	int add_result;
	int c;
	result = syscall(319, 4, 5, &c);
	printf("Simple_add stores 4+5, which is %d in variable c \n", c);
}
