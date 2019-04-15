#include <stdio.h>
#include <ctype.h>

int main(){
	char c = 'C';

	if(islower(c))
		printf("%c is lower case character \n", c);
	else printf("%c is not lower case character \n", c);
}