#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	char* hello_str = "hello pointer";
	int i = 0;
	for(i=0;i<strlen(hello_str);i++){
		printf("%c\n",hello_str[i]);
	}
	return 0;
}