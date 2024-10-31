#include <stdio.h>
#include "task1.h"
#include <ctype.h>

void str_lower(char *orig, char *copy){
	int x = 0;
	int newc;

	while(orig[x] != '\0'){
		
		newc = tolower(orig[x]);
		copy[x] = newc;
		
		x++;
	}
}

void str_lower_mutate(char *orig){
	int x = 0;
	int newc;
	while (orig[x] != '\0'){
		
		newc = tolower(orig[x]);
		orig[x] = newc;
		
		x++;
	}
}

int main(){
	char test_list[] = "HELLO";
	char test_return[10];
	char test_list2[] = "BOO";

	str_lower(test_list, test_return);

	printf("test return: %s\n", test_return);
	
	str_lower_mutate(test_list2);
	
	printf("test list2 after mutate: %s\n", test_list2);		

}  
