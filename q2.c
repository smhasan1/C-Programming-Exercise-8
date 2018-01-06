#include<stdio.h>
#include<string.h>

int main(){

	int c = 0, count = 0, i = 0, d, q= 0;
	char input[1001];

	fgets(input, 1001, stdin);

	while(input[c] != '\n'){
	c++;
	}

	d = (c/4)+1;

	input[c] = '\0';

//printf("%s", input);
//printf("%d\n", d);
	while(i < d){
//printf("Q\n");
		if(input[count] == '\0'){
		break;
		}

		if(input[count] != 'A'){
		goto end;
		}
//printf("H%d\n", i);
		count++;

		if(input[count] != 'C'){
		goto end;
		}
//printf("S%d\n", i);
		count++;

		if(input[count] != 'G'){
		goto end;
		}

		count++;
//printf("A%d\n", i);

		if(input[count] != 'T'){
		goto end;
		}

		count++;

		i++;
//printf("%d\n", i);

	continue;

end:	printf("Invalid sequence\n");
	q++;
	break;
	}

	if(c == 0){
	printf("Invalid sequence\n");
	return 0;
	}

	if(q == 0){
	printf("Valid sequence\n%d\n", i);
	}
	

}
