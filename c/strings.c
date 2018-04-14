#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longest(char* s1, char* s2) {
	int sz_s1 = strlen(s1);
	int sz_s2 = strlen(s2);
	int tsz = sz_s1 + sz_s2;

	// create single string
	char *rez = malloc(tsz * sizeof(char));
	strcpy(rez, s1);
	strcat(rez, s2);
	char temp;
	int sz = strlen(rez);
	int i, j;

	// sort ascending
	for (i = 0; i < sz-1; i++) {
		for (j = 0; j < sz - i - 1; j++) {
			if (rez[j] > rez[j+1]) {
				temp = rez[j];
				rez[j] = rez[j+1];
				rez[j+1] = temp;
			}
		}
	}

	// remove duplicated chars
	char *final = malloc(tsz * sizeof(char));
	i = 0;
	while(*rez) {
		final[i++] = *rez;
		rez = strrchr(rez, *rez);
		rez++;
	}
	strcat(final, "\0");

	return final;
}

int main() {

	printf("Start..\n");
	printf("Result: %s\n", longest("aretheyhere", "yestheyarehere"));

	return 0;
}
