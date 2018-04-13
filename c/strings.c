#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longest(char* s1, char* s2) {
	int sz_s1 = strlen(s1);
	int sz_s2 = strlen(s2);
	int tsz = sz_s1 + sz_s2;

	char *rez = malloc(tsz * sizeof(char));
	strcpy(rez, s1);
	strcat(rez, s2);

	char temp;
	int sz = strlen(rez);
	int i, j;
	printf("Rez: %s\n", rez);
	printf("Size: %d\n", sz);

	// sort
	for (i = 0; i < sz-1; i++) {
		for (j = 0; j < sz - i - 1; j++) {
			if (rez[j] > rez[j+1]) {
				temp = rez[j];
				rez[j] = rez[j+1];
				rez[j+1] = temp;
			}
		}
	}
	printf("Sorted: %s\n", rez);

	// remove duplicates
	char *final = rez;
	const char ttt = 'e';
	while(*rez) {
		rez = strchr(rez, ttt);
		break;
		
	}
	//*final = '\0';

	return rez;
}

int main() {

	printf("Start..\n");
	printf("Result: %s\n", longest("aretheyhere", "yestheyarehere"));

	return 0;
}
