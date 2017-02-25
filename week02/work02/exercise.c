/*
 * Name: Riandani Gita Larasati
 * NPM: 1606954981
 * Class: OS EXT
 * Comment: Latihan Work2 OS
 */


#define LOOP 4

#include <stdio.h>

void main(){
	int input = 6;
	int aa,bb = 0;
	for (aa = 0; aa<LOOP; aa++){
		bb = bb+input;
	}
	printf("%d times %d equals %d\n", input, LOOP, bb);
}
