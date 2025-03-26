#include<stdio.h>

/* pass parameters to the main
 *  Ex: ./a.out qwertyuio
 * */
int main(int argc, char *argv[]){

	int i,count=0;
	char *s;
	//char s[20]="Hello .... World.!";
	sscanf(argv[1],"%s",s);
	for (i=0;s[i]!='\0';i++){
		count+=1;
	}
	printf("%d\n",count);
	return 0;
}
