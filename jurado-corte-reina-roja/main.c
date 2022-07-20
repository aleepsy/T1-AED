// @author: Ale Castillo
#include <stdio.h>

int c(int n){
	if(n == 1){
		return 0;
	} else{
		return (n * n -n)/2 + c(n / 2) + c(n -n / 2);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", c(n),"\n");
}