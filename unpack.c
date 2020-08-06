#include <stdio.h>

#define SIZE 500

int main() {
	int n;
	n = getchar();
	if (EOF == n) {
		return 0;
	}

	int charRepeat;
	char bufSingle[SIZE]; 	
	int temp;
 	
	do {
		if ( n > 128 ) {
			n -= 128;
			for (int i = 0; i < n; ++i) {
				temp = getchar();
				putchar(temp);
			}
										
		} else {
			temp = getchar();
			for (int i = 0; i < n; ++i) {
				putchar(temp);
			}	
		}
		n = getchar();
	} while (n != EOF);
	// this is for correct text file ends
	if ( '\n' != temp ) {
		putchar( '\n' );
	}
}
