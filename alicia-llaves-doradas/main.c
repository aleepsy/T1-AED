// @author: Ale Castillo
#include <stdio.h>

int main(){
	int a, c;
	scanf("%i", &a);
	
	int arr[100001];
	for(int i=0;i<100002;++i){
		arr[i]=0;
	}
	
	for(int i=0;i<a;++i){
		scanf("%i", &c);
		arr[c]=i+1;	
	}	
	scanf("%i", &a);
	for(int i=0;i<a;++i){
		scanf("%i", &c);
		printf("%i ", arr[c]);
	}
return 0;
}