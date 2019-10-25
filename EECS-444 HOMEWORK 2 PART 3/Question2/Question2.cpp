#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	int max=0;
	int a[10]={12,15,221,3,432,36,10,43,0,0};
	for(i=0;i<=7;i++){
		if(max<a[i])
		max=a[i];
	}
	printf("%d",max);
	return 0;
}
