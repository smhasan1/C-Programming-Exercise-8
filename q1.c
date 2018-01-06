#include<stdio.h>
#include<string.h>

int main(){

	int input[10], max, i, c;

	memset(input, 0, sizeof input);  

	scanf("%d %d %d %d %d %d %d %d %d %d",&input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7], &input[8], &input[9]);
	
	max = input[0];

	for(i = 1; i < 10; i++){

		if(input[i] > max){
		max = input[i];
		c = i;
		}

	}

	printf("%d:%d\n", c+1, max);
	


}
