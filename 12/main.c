#include <stdlib.h>
#include <stdio.h>
int f(int);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
} 

int f(int n){
	if(n==1 || n==0){
		return n+1;
	}
	else{
		return (f(n-1)+f(n/2));
	}
}
