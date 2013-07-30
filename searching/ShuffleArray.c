#include<stdio.h>
#include<stdlib.h>

void shuffleArray(int *array,int N){
	int i=0,j=0,temp=0,temp1=0;
	
	for(i=1;i<N/2;i++){
		if(i%2 == 0){

			temp = array[i];
			array[i] = temp1;
			
		}else{

			temp1 = array[i];
			array[i] = array[i + N/2];
		}
	}

}

int main(){
	
}
