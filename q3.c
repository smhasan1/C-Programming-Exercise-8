#include<stdio.h>
#include<string.h>

int main(){

	int n, r = 0, c = 0;

	
	scanf("%d", &n);

	int  matrix[n][n];

	getchar();

	while(r < n){

	c = 0;	
		while(c < n){

		scanf("%d", &matrix[r][c]);
		getchar();

		c++;

		}
	
	r++;

	}

/*
int i=0, j= 0;
while(i<3){
j=0;
while(j<3){
printf("%d\n", matrix[i][j]);
j++;
}
i++;
}
*/

	r = 0;
	c = 0;
	int sum;

	while(r < n){

		c = 0;
		sum = 0;

		while(c < n){

		sum = sum + matrix[r][c];
		c++;
		
		}
	
		sum = sum - matrix[r][r];

//printf("%d\t%d\n", sum, matrix[r][r]);

		if(sum > matrix[r][r]){
		goto end;
		}

	r++;
	continue;	

end:		printf("NO\n");
		return 0;
	}

	printf("YES\n");



}
