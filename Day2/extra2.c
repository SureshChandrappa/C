%:include<stdio.h>

int main(){
	//with Diagraph
	int arr<::> =  <% 10,20,20 %>;
	printf("The second array elemrnt is <%d>.\n",arr<:1:>);

	//withoput Diagraph
	int arr2[]={10,20,30};
	printf("The second array elemrnt is <%d>.\n",arr2[1]);

	
	//with Trigraph
        printf("Cancel???(y/n) ");	
	return 0;
}

// use -trigraph flag ==> gcc -o extra extra2.c -trigraph [while compiling the code]
