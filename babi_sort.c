#include<stdio.h>

int main(){
	int array[] = {-27, 3, 18, -4, -30, 7, 28, 0, 1, -14};
	int i = 0;
	int first = 0;
	static int second = 1;
	int temp = 0;
	
	void print(char * t)	
	{	
	/* Defines The  Print Function */
	printf("%s",t);
	for (i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	}	

	/* Prints the current order*/
	print("The current order: ");

	/* Sorts the array to the currect order*/
	for (first = 0; first<9; first++){
		for (second = first + 1;  second <10; second++){
			if(array[first]>array[second]){
				temp = array[first];
				array[first] = array[second];
				array[second] = temp;
				}
			}
			/*DEBUG- Prints the array every loop*/
			print("The order now is ");
	}
	/* Prints the currect order */
	print("The correct order: ");
	return 0;
}
