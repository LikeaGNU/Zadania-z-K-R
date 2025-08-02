/*
 * Język C. Programowanie (K&R)
 * Ćwiczenie 1.9
 * Napisz program, który kopiuje znaki z wejścia na wyjście i zastępuje przy tym każdy ciąg złożony
 * z jednej lub większej liczby spacji pojedynczym znakiem spacja
 */ 

#include <stdio.h>

int main() {
	char c, c_old;

	c_old = 'a';

	while((c = getchar()) != EOF) {
		if(c == ' ' && c_old == ' ')
			putchar('\b');

		c_old = c;
		putchar(c);
	}

	return 0;
}
