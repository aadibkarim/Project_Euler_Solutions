/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?



*/

	#include <iostream>
	using namespace std;

	int number_generator();
	int divider_function(int number);

	int number ;
	int max_divisor = 20 ;

	//number generator would start off with a number and increment the number.
	int number_generator(){
		

		for( number = max_divisor ;  number <= 362880000 ; number += max_divisor  ){

			//cout<<number<<endl;
			//number = number ;	

			divider_function(number);

		}

	}

	//divider would divide the numbers from 1 to 20 and output if they are divisable
	int divider_function(int input){

		int divider ;
		int isDivisable = 1 ;

		for( divider = 1 ; divider <= max_divisor ; divider++ ){
			//if the input is not divisable by divider then is div = 0
			if ((input % divider) != 0 ){

				//break;
				isDivisable = 0 ;

			}
		}
			if(isDivisable==1){
			cout<< input << " is divisable by 1 to 20 " << endl;
		   }

	}


	int main(){

		number_generator() ;

	}