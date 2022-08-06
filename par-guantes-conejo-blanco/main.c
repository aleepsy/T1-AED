// @author: Ale Castillo
#include <stdio.h>
#include <stdlib.h>

int main(){
  
	int n, aux = 0, repite;
	int cont;
	scanf("%d",&n);
  int arr[n];
  
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
	}
    
	for (int i=0;i<n;i++){
		cont = 0;                       
		for(int j=0; j<n; j++){
			if(arr[j] == arr[i]){   
			cont++;                
			}
    }
    if(cont > aux){
      repite = arr[i];
      aux = cont;
    }
  }
  printf("%d", repite);
	return 0;
}