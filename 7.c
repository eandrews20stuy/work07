/*
Work 07: Arrays and Pointers and Functions, oh my!

Oct 4, 2021
Due: Tuesday 10/05 10:00am
GitHub Submission Link: git@github.com:mks65/07_funky.git
Arrays and Functions

Hint: For these problems, you might find it helpful to add an extra parameter.

    Write a function that takes an array of int values as a parameter and prints it out.
        Have the output be in the following format: [ v0 v1 v2 ... ]

    Write a function that takes an array of int values as a parameter and returns the average of those values.
    Write a function that takes 2 arrays of equal size as paramters (you can chose the type). The function should copy the values of the first array into the second.

*/
#include <stdio.h>
void print_array(int arr[]) {
	printf("[ ");
	if (sizeof(arr) != 1) {
		for (int i = 0; i < (sizeof(arr) - 1); i++) {
			printf("%d ",arr[i]);
		}
	}
	printf("%d ]",arr[sizeof(arr)-1]);
}
long avg_array(int brr[]) {
	if (sizeof(brr) == 1) return brr[0];
	int sum = 0;
	for (int i = 0; i < sizeof(brr); i++) {
		sum += brr[i];
	}
	long arr_avg = (sum / sizeof(brr));
	return arr_avg;
}
void copy_array(int arrone[], int arrtwo[]) {
	if (sizeof(arrone) == sizeof(arrtwo)) {
		if (sizeof(arrone) != 1) {
			for (int i = 0; i < (sizeof(arrone) - 1); i++) {
				arrtwo[i] = arrone[i];
			}
		}
		arrtwo[sizeof(arrone) - 1] = arrone[sizeof(arrone) - 1];
	}
}
int main() {
	printf("Hi world!\nMy array: ");
	int my_array[10] = {9,42,64,12,74,92,5,18,63,35};
	print_array(my_array);
	printf("\n");
	long my_avg = avg_array(my_array);
	printf("My average: %ld\n",my_avg);
	int my_brray[10];
	copy_array(my_array,my_brray);
	printf("My array is ");
	print_array(my_array);
	printf(", and my brray is ");
	print_array(my_brray);
	printf(".\nBye world!\n");
	return 0;
}
