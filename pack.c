#include <stdio.h>

#define SIZE 500

int main() {
	int c1, c2;
	c1 = getchar();
	if (EOF == c1) {
		return 0;
	}
	char single = 0;
	char repeat = 0;
	char bufSingle[SIZE]; 	
 	char charRepeat;
 	

	c2 = getchar();
 	do {	
		while (c1 == c2 && (repeat < 128)
			 && ( c2 != EOF ) ) {
			++repeat;
			charRepeat = c1;
			c1 = c2;
			c2 = getchar();
		}
		if ( 0 != repeat ) {
			printf("%c%c", (char) repeat + 1, charRepeat);
			repeat = 0;
			c1 = c2;
			c2 = getchar();
		}

		while (c1 != c2 && (single < 127)
			 && ( c2 != EOF )) {
			bufSingle[single] = c1;
			++single;
			c1 = c2;
			c2 = getchar();
		}
		if ( 0 != single ) {
			bufSingle[single] = '\0';
			printf("%c%s", (char) 128 + single, bufSingle);
			single = 0;
		}		
	} while (c2 != EOF);
}
