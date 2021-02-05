/* Luke Grippa, Will Koenig, and Kyle Ernst
 * Daniel Gaston
 * 3/7/19
 * This file contains functions for lab 2. The functions aren't necessarily related
 * in any way other than that they are required for lab 2
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

void func1();
void func2(int x);
int func3 ();
void func4(int &d);
void func5 (int *e);
void func6 (int *g, int *h);
void func7(char p1, char *p2, char &p3);
bool func8a(int *x, int *y);
void func8b();
void func10(int x, int y);
int func11();
void func12(int arr[], int size);
int *func13 (int *length, int *high, int *low);
//void *func14 (int *length, int *high, int *low);
void func15(int arr[], int size);
void func16(double arr[], int size);
int *func17(int arr[], int *size);
int *func18(int arr[], int size);

int main() {
	//From Problem 1;
	cout << "Problem 1: " << endl;
	func1();
	cout << " " << endl;

	//From Problem 2: this function uses call by value
	cout << "Problem 2: " << endl;
	int b2 = 5;
	cout << "From main: " << b2 << endl;
	cout << "From main: " << &b2 << endl;
	func2(b2);
	cout << " " << endl;

	//From Problem 3:
	cout << "Problem 3: " << endl;
	int x = func3();
	cout << "From main: " << x << endl;
	cout << "From main: " << &x << endl;
	cout << " " << endl;

	//From Problem 4:
	cout << "Problem 4: " << endl;
	int y = 3;
	cout << "From main: " << y << endl;
	cout << "From main: " << &y << endl;
	func4(y);
	cout << "From main: " << y << endl;
	cout << "From main: " << &y << endl;
	cout << " " << endl;

	//From Problem 5:
	cout << "Problem 5: " << endl;
	int p = 4;
	cout << "From main: " << p << endl;
	cout << "From main: " << &p << endl;
	func5(&p);
	cout << "From main: " << p << endl;
	cout << "From main: " << &p << endl;
	cout << " " << endl;

	//From Problem 6:
	cout << "Problem 6: " << endl;
	int g = 10;
	int h = 20;
	func6 (&g, &h);
	cout << " " << endl;

	//From Problem 7:
	cout << "Problem 7: " << endl;
	char c1 = 'p';
	char c2 = 'e';
	char c3 = 'n';
	char c4 = 'c';
	char c5 = 'i';
	char c6 = 'l';
	cout << "From main: " << c1 << c2 << c3 << c4 << c5 << c6 << endl;
	func7(c1, &c3, c5);
	cout << "From main: " << c1 << c3 << c1 << c2 << c5  << endl;
	cout << " " << endl;

	//From Problem 8a:
	cout << "Problem 8a: " << endl;
	int d1 = 3;
	int d2 = 4;
	cout << "Swapped: " << func8a(&d1, &d2) << endl;
	int d3 = 6;
	int d4 = 4;
	cout << "Swapped: " << func8a(&d3, &d4)<< endl;
	int d5 = 7;
	int d6 = 8;
	cout << "Swapped: " << func8a(&d5, &d6) << endl;
	cout << " " << endl;

	//From Problem 8b:
	cout << "Problem 8b: " << endl;
	func8b();
	cout << " " << endl;

	//From Problem 8:
	cout << "Problem 8: " << endl;

	cout << " " << endl;

	//From Problem 10:
	cout << "Problem 10: " << endl;
	func10(5,5);
	func10(3,20);
	func10(11,15);
	cout << " " << endl;

	//From Problem 11:
	cout << "Problem 11: " << endl;
	//int* var1 = func11();
	//When we attempted to set a pointer variable = to the address returned by func11
	//it did not work and our program did not compile.
	func11();
	cout << " " << endl;

	//From Problem 12a: nothing to be done in main as this is pretty much a helper function
	cout << "Problem 12a: " << endl;
	cout << " " << endl;


	//From Problem 12b
	cout << "Problem 12b: " <<endl;
	int arr[25];
	for (int i = 0; i < 25; i ++){
		arr[i] = rand()%10;
	}
	cout << "Printing out arr from problem 12b using 12a: " << endl;
	func12(arr, 25);
	cout << " " << endl;

	//From Problem 13:
	cout << "Problem 13: " << endl;
	int f1 = 30;
	int f2 = 7;
	int f3 = -7;
	int *f4 = func13(&f1, &f2, &f3);
	func12(f4, 30);
	cout << " " << endl;

	//From Problem 14:
	cout << "Problem 14: " << endl;
	cout << "This function doesn't work " << endl;
	cout << " " << endl;

	//From Problem 15:
	cout << "Problem 15: " << endl;
	int array1[5] = {1, 2, 3, 4, 5};
	func15(array1, 5);
	cout << " " << endl;
	int array2[3] = {1, 2, 3};
	func15(array2, 3);
	cout << " " << endl;
	int array3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	func15(array3, 10);
	cout << " " << endl;

	//From Problem 16:
	cout << "Problem 16: " << endl;
	double array4[5] = {1.4, 2.7, 3.1, 4.3, 5.2};
	func16(array4, 5);
	cout << " " << endl;
	double array5[3] = {1.1, 2.7, 3.9};
	func16(array5, 3);
	cout << " " << endl;
	double array6[10] = {1.7, 2.5, 3.6, 4.5, 5.5, 6.3, 7.8, 8.0, 9.1, 10.2};
	func16(array6, 10);
	cout << " " << endl;

	//From Problem 17:
	cout << "Problem 17: " << endl;
	int as = 25;
	int array7[] = {5, 4, 4, 3, 6, 6, 6, 8, 9, 5, 1, 3, 8, 8, 1, 8, 9, 9, 3, 2, 2, 2, 6, 1, 2};
	func17(array7, &as);
	int as1 = 5;
	int array8[] = {3, 3, 3, 4, 5};
	func17(array8, &as1);
	int as2 = 10;
	int array9[] = {3, 2, 4, 4, 5, 5, 3, 2, 2, 4, 5, 5};
	func17(array9, &as2);
	cout << " " << endl;

	//From Problem 18:
	cout << "Problem 18: " << endl;
	int array10[] = {3, 8, 2, 5, 1, 4, 6, 0, 2};
	func18(array10, 9);
	cout << " " << endl;
}

//Problem 1 - Function 1 - This function has no parameters and returns nothing,
//it creates a variable and prints this variable as well as it's address.
void func1() {
	int a = 7;
	cout << a << endl;
	cout << &a << endl;
}

//Problem 2 - Function 2 - This function's only parameter is an integer which it adds four
//to and prints this value as well as the variables address.  The function that I use
//to print out the address as well as the value is called a call by value, because the parameter
//I am passing in is just a value.
void func2(int b){
	b+=4;
	cout << b << endl;
	cout << &b << endl;
}

//Problem 3 - Function 3 - This function has no input parameters and creates a variable with
//a randomly assigned value from 0-49, in order for the value to be completely random it is important
// to seed the function with the something constantly changing such as the time.
//Finally, the function returns and prints this variable.
int func3(){
	srand(time(NULL));
	int c = rand() % 50;
	cout << c << endl;
	cout << &c << endl;
	return c;
}

//Problem 4 - Function 4 - This function takes in an address of a variable (call by reference)
//and cubes the value at this address then prints out the address of the parameter, the address held
//by the parameter, as well as the value located at the address held by the parameter.  This function
//returns nothing.
void func4(int &d){
	d = pow(d,3);
	cout << d << endl;
	cout << &d << endl;

}


//Problem 5 - Function 5 - This function has one parameter, an alias of an integer, which is added
//to a random value from 0-10 and then printed along with the random value added to it and the address
//of the input parameter
void func5(int *e){
	srand(time(NULL));
	int f = rand() % 10;
	*e += f;
	cout << f << endl;
	cout << e << endl;
	cout << *e << endl;
}

//Problem 6 - Function 6 - This function takes in as parameters two pointers to integer values and
//modifies the values at these addresses using a local variable created within the function such
//that the first parameter holds 32 and the second holds 42
void func6 (int *g, int *h){
	int *i;
	i = g;
	*i = 32;
	i = h;
	*i = 42;
	cout << g << endl;
	cout << h << endl;
}

//Problem 7 - Function 7 - This function has three parameters: a pointer to an int, an address
//of an integer, and an integer (call by pointer, call by reference, and call by value) modifies
//the character variables created in main that spelled out pencil to now spell out paper
void func7(char p1, char *p2, char &p3) {
	p1 = 'a';
	*p2 = 'a';
	p3 = 'r';
}

//Problem 8a - Function 8a - This function has two parameters: both are pointers to an int call by pointer)
//if the value of x is larger then the value of y then their values will swap and the function will return
//true. Otherwise the values will stay the same and the function will return false.
bool func8a(int *x, int *y) {
	int l;
	if (*x > *y) {
		l = *x;
		*x = *y;
		*y = l;
		return true;
	} else {
		return false;
	}
}

//Problem 8b - Function 8b - This function has no parameters. It generates two random numbers 20 times, prints
//the numbers and then calls function 8a with those two random numbers.
void func8b() {
	srand(time(NULL));
	int f1;
	int f2;
	for (int i = 0; i <= 20; i++) {
		f1 = rand() % 25;
		f2 = rand() % 25;
		cout << f1 << " " << f2 << endl;
		if (func8a(&f1, &f2) == 1) {
			cout << "Swapped:" << f1 << " " << f2 << endl;
		}
	}
}

//Problem 8 - Function 8 - This function has no parameters. It generates two random numbers 20 times, prints
//the numbers and then calls function 8a with those two random numbers.


//Problem 10 - Function 10 - This function takes in two integer parameters, one representing
//the length of the array to be created and one representing the range of random numbers that
//will be used to print the array
void func10(int x, int y) {
	srand(time(NULL));
	int arr[x];
	for (int i = 0; i < x; i++) {
		arr[i] = rand() % y;
	}
	int p = 0;
	int z;
	while (p < x) {
		int small = y;
		for (int i = 0; i < x; i++) {
			if (arr[i] < small) {
				small = arr[i];
				z = i;
			}
		}
		cout << arr[z] << endl;
		arr[z] = y + 1;
		p++;
	}
	cout << " " << endl;
}

//Problem 11 - Function 11 - This function has no parameters and creates a new variable and places
//it on the stack.  The function sets this variable = to 3.  The function then prints out the
//value and address of this variable and returns the address of this variable.
int func11() {
	int var = 3;
	cout << "From func11: " << var <<endl;
	cout << "From func11: " << &var <<endl;
	return var;
}

//Problem 12a - Function 12a - This function takes an array of integers as a parameter and prints it
//with commas separating each integer
void func12(int *arr, int size) {
	for (int i = 0; i < size; i ++){
		cout << arr[i] << ", ";
	}
	cout << endl;
}

//Problem 13 - Function 13 - This function takes three pointers to integers and creates a new array
//with a randomly generated length between 25 and 50.  The function then generates a random high
//number between 5 and 10 and a random low number between -5 and -10.  The original 3 pointer
//parameters are modified to hold the range, the high, and the low
int *func13 (int *length, int *high, int *low) {
	srand(time(NULL));
	int *array1 = NULL;
	// *length = rand()%25 + 25;
	array1 = new int[*length];
	// *high = rand()%5 + 5;
	// *low = rand()%5 - 10;
	for (int i = 0; i < *length; i++){
		array1[i] = (rand()% (*high - *low)) + *low;
	}
	return array1;
}

//Problem 14 - Function 14 - This function does the same thing as function 13 except that it creates
//an array on the stack instead of the heap.  This would not work for a
//couple of reasons.  First, func1 does not have any input parameters that would allow
//me to pass an array of integers into it.  Second, this array was created within func14
//and placed on the stack.  This means that it would be impossible for me to access from
//another function.
//int *func14 (int *length, int *high, int *low) {
	//srand(time(NULL));
	//int *array1 = NULL;
	//*length = rand()%25 + 25;
	//array1[*length];
	//*high = rand()%5 + 5;
	//*low = rand()%5 - 10;
	//for (int i = 0; i < *length; i++){
	//	array1[i] = (rand()% (*high - *low)) + *low;
	//}
	// return array1;
//}

//Problem 15 - Function 15 - This function takes three pointers to integers and creates a new array
//with a randomly generated length between 25 and 50.  The function then generates a random high
//number between 5 and 10 and a random low number between -5 and -10.  The original 3 pointer
//parameters are modified to hold the range, the high, and the low
void func15(int arr[], int size) {
	for (int i = 0; i < size; i++){
			cout << (i + 1) << ". " << &arr[i] << endl;
		}
}

//Problem 16 - Function 16 - This function takes three pointers to integers and creates a new array
//with a randomly generated length between 25 and 50.  The function then generates a random high
//number between 5 and 10 and a random low number between -5 and -10.  The original 3 pointer
//parameters are modified to hold the range, the high, and the low
void func16(double arr[], int size) {
	for (int i = 0; i < size; i++){
			cout << (i + 1) << ". " << &arr[i] << endl;
		}
}

//Problem 17 - Function 17 - This function takes in two paramets an array of integers and
//a pointer to the size of the array.  The function then loops through the array and checks
//to see if there are any numbers repeated back to back.  The function then creates a new
//array without these duplicates and adjusts the size value of the array.
int *func17(int arr[], int *size) {
	int duplicates = 0; //after looping through this will tell me the number of duplicates
	for(int i = 0; i < *size; i++){
		if (arr[i] == arr[i+1]){
			duplicates++;
		}
	}
	int size2 = *size - duplicates;
	int *arr2 = new int[size2];
	int ct = 0;
	for(int i = 0; i < *size; i++){
		if (arr[i] != arr[i+1]){
			arr2[ct] = arr[i];
			ct++;
		}
	}
	for (int i = 0; i < size2; i++){
		cout << arr2[i] << ", ";
	}
	cout << " " << endl;
	return arr2;
}

//Problem 18 - Function 18 - This function is for the hanning window. It takes as an input
//a part of an integer and then
int *func18(int arr[], int size) {
	int window = 3;
	int countNum = 0;
	int cycleNum = 0;
	int *arr3 = new int[size];
	cout << arr[0] << ", ";
	for (int p = 0; p < size; p++) {
		cout << arr[p] << ", ";
	}
	while(cycleNum <= size) {
		for (int i = (0 + cycleNum); i < (window + cycleNum); i++) {
			countNum += arr[i];
			cycleNum++;
		}
		arr3[0] = 0;
		arr3[size - 1] = 0;
		arr3[cycleNum / 3] = countNum / window;
	}
	for (int z = 0; z < size; z++) {
		//cout << arr3[z] << ", ";
	}
	return arr3;
}


//Problem 19 - Function 19 - This function takes as parameters an integer array and the
//size of that array.  Then function then uses the previous function to filter the array
//and create a new filtered array on the heap.

//Problem 20 - Function 20 - This function takes as parameters an integer array, the size of
//the array, the highest value, and the lowest value.  the function then  creates and prints
//a two dimensional array to serve as a scatter plot graph of the original array.

//Problem 21 - Function 21 -





