/*
 * Język C. Programowanie (K&R)
 * Ćwiczenie 1.8
 * Napisz program zliczający znaki spacji, tabulatora i nowego wiersza
 */ 

#include <stdio.h>

int main() {
	char c;
	int spcs = 0;
	int tabs = 0;
	int nlns = 0;

	while((c = getchar()) != EOF) {
		if(c == ' ')
			spcs++;
		if(c == '\t')
			tabs++;
		if(c == '\n')
			nlns++;
	}

	printf("\nSpacje: %d\nTabulacje: %d\nNowe linie: %d\n", spcs, tabs, nlns);

	return 0;
}
