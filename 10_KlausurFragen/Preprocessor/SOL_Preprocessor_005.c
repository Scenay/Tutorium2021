#include <stdio.h>
#define VARPRINT(x) printf(#x ": %d", x)

int main()
{
	int x = 10;
	VARPRINT(x);
	return 0;
}

// Was wird ausgegeben?
//		b) x: 10
// Erklärung: #x wird durch den Namen der Variable ersetzt, die an das Makro übergeben wurde, dieser ist x. x wird durch die Variable ersetzt, die an das Makro übergeben wurde, welche wiederum x ist. Damit steht nach dem Ersetzen des Makros...
//					printf("x" ": %s", x);
//			  ...und schließlich
//					printf("x: %s", x);