/*
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.

Challenge 1 : Make a function to check if number is palindromic

Challenge 2 : Make sure the product is happening between only 2 digit numbers. 
Make function that does multiplication between 2 digit numbers only. 
This function will need to go through all the 2 digit numbers for both the numbers which are to be multiplied.

*/

#include <iostream>
using namespace std;
int palindromic_checker(int input);

int product_generator(){

int number_1 ;
int number_2 ;
int product  ;
int largest = 0;

	for(number_2 = 100; number_2 <= 999 ; number_2++){

		for(number_1 = number_2 ; number_1 <= 999 ; number_1++){

			product = number_1 * number_2 ;
			//cout << " The product between " << number_1 << " and " << number_2 << " is " << product << endl;
			if(palindromic_checker(product) != 0){
				cout<< " The palindromic product is " << product << endl;

				if( product>largest ) {
					largest = product ;

				} 

			}
		}
	}
cout<< "largest number is" << largest << endl;
}

int palindromic_checker(int input){

int digit;
int backward = 0 ;
int remember = input ;
while(1){


	digit = input % 10 ;

	input = input / 10 ;
	backward += digit ;

		if (input == 0) {

			break;
		}
	backward *= 10 ;
	
}
if(backward == remember){
	return backward ;

}
else{
	return 0 ;
	}
}

int main()
{
	product_generator();
	return 0;
}