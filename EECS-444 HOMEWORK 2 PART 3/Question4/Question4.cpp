#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=7;
	int x,p;
	int y[101];
	y[1]=1;
	y[2]=2;
	y[3]=3;
	for(x=3;x<=100;x++){
		p=x+1;
	   y[p]=(y[x]+a)%p;
	   if(y[p]==0)
	   			y[p]=p;
}
	
	printf("%d",y[100]);
		return 0;

}
