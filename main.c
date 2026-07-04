#include <stdio.h>
#include <stdint.h>
#include <windows.h>

int main(void) {

	char *strRed = "Red";
	char *strYellow = "Yellow";
	char *strGreen = "Green";
	int isInvalid = 1;

	while(isInvalid) {
		printf("%s\n", strRed);
		Sleep(10000);
		printf("%s\n", strYellow);
		Sleep(2000);
		printf("%s\n", strGreen);
		Sleep(5000);
	}

	return 0;
}
