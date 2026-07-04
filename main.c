#include <stdio.h>
#include <stdint.h>

int main(void) {

	char command = 'a';

	switch(command)
	{
		case 'L':
			printf("open");
			break;
		
		case 'F':
			printf("fan open");
			break;

		case 'M':
			printf("motor open");
			break;
		default:
			printf("Undefined command");
			break;		
	}

	return 0;
}
