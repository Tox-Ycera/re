#include <stdio.h>
int main(){
	int a;
	int marks[5] = {20, 30, 40, 50, 60};
	for (a=0; a<10; a++){
		printf("marks[%d] = %d\n",a, marks[a]);
	}
	return 0;
}
