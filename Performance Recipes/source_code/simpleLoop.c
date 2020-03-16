#include <stdio.h>
double foo() {
	int b = 0;
    
	for(int j =0; j<1000; j++) {
    		printf("%d\n", b++);
	}
	return b;
}



int main() {
    foo();
}