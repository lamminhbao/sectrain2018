// gcc -m32 -z execstack -fno-stack-protector ex02.c -o ex02
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void abcxyz() {
	system("/bin/sh");
}

void f(char* input) {
	int cookie = 0;
	char s[32];
	strcpy(s, input);

	if (cookie){
		printf("Cookie changed - You win level 00.\n");
	}
	if (cookie == 0x41424344) {
		printf("Cookie to 0x%x  - You win level 01.\n", cookie);
	}
	if (cookie == 0x01020304) {
		printf("Cookie to 0x%x  - You win level 02.\n", cookie);
	}
	printf("%p\n", s);
}

void main(int argc, char** argv) {
	if (argc == 1)
		return;
	f(argv[1]);
}