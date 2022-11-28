#include <stdio.h>
#include <stdlib.h>
//Collaborated with Pierce Medy & Izu

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exitprog (int a, int b);



int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int(*funcPtr[5])(int,int);
	functPtr[0] = add;
	functPtr[1] = subtract;
	functPtr[2] = multiply;
	functPtr[3] = divide;
	functPtr[4] = exitprog;
	
	int userChoice;

	print("Operand 'a':6 | Operand 'b': 3\n Specify the operation to preform \n (0: add | 1: subtract | 2: multiple | 3: divide | 4: exit): ");
	scanf("%d", &userChoice);

	int result = funcPtr[userChoice](6,3);

	print("x = %d\n", result);

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
	printf ("Adding 'a' and 'b'\n");
	return a + b; 
}

int subtract (int a, int b) { 
	printf ("Subtracting 'a' and 'b'\n"); 
	return a - b; 
}

int multiply (int a, int b) { 
	printf ("Multiplying 'a' and 'b'\n"); 
	return a * b;
	}

int divide (int a, int b) {
	printf ("Dividing 'a' and 'b'\n"); 
	return a / b;
	}

int exitprog (int a, int b){ 
	exit(1); 
	}
