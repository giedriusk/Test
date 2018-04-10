#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longest(char* s1, char* s2) {
	int sz_s1 = strlen(s1);
	int sz_s2 = strlen(s2);
	int tsz = sz_s1 + sz_s2;

	char *rez = malloc(tsz * sizeof(char));
	strcpy(rez, s1);

	char temp;
	int sz = strlen(rez);
	int i, j;
	printf("Size: %d\n", sz);

	for (i = 0; i < sz-1; i++) {
		for (j = 0; j < sz; j++) {
			if (rez[i] > rez[j]) {
				temp = rez[i];
				rez[i] = rez[j];
				rez[j] = temp;
			}
		}
	}

	return rez;
}

int main() {

	printf("Start..\n");
	printf("Result: %s\n", longest("aretheyhere", "yestheyarehere"));

	return 0;
}
