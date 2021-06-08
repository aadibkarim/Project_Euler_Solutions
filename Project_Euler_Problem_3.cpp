/*
Project Question:

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?

Roadmap to solution :
1) Find all the factors of 13195.
2) Find out which of the factors are prime and if they are 5 , 7 , 13 & 29 :
: if yes apply same method for 600851475143.

Detailed Process for finding factors :
Definition of a factor is when the target number is divided by a potential factor, the remainder would be '0'
The " % " sign divides a number with another number and outputs the remainder.
This is also called the remainder sign.
Here we found all the factors of 13195.

Definition of Prime numbers :
A number is a prime number when only it is divisable by 1 or itself.

Explanation and Characteristics of Prime Numbers:
A prime number can be divided, without a remainder, only by itself and by 1. For example, 17 can be divided only by 17 and by 1.


Some facts on Prime Numbers :

* The only even prime number is 2. All other even numbers can be divided by 2.
* If the sum of a number's digits is a multiple of 3, that number can be divided by 3.
* No prime number greater than 5 ends in a 5.
* Any number greater than 5 that ends in a 5 can be divided by 5.
* Zero and 1 are not considered prime numbers.
* Except for 0 and 1, a number is either a prime number or a composite number.
A composite number is defined as any number, greater than 1, that is not prime.

To prove whether a number is a prime number,

*** first try dividing it by 2, and see if you get a whole number.
If you do, it can't be a prime number.

If you don't get a whole number, next try dividing it by prime numbers: 3, 5, 7, 11 (9 is divisible by 3)
and so on, always dividing by a prime number

Plan :
Hence all the factors that has been found for 13195 needs to be saved and divided by themselves and
needs to be checked if they have any other remainder.

Divide the obtained factors by 2, 3, 5, 7, 11 .


*/

#include <iostream>
using namespace std;

int main() {

//cout << "example of remainder for 10 % 3 is : " << (10 % 3) << endl ;
//cout << "example of remainder for 10 % 2 is : " << (10 % 2) << endl ;

long i = 2 ;
long x;

// Here we divide every number from 1 to 13195 to get the factors of 13195 which means only
// if remainder is 0 then it is a factor

while (i < 600851475143) {
	if (600851475143 % i == 0 )  {
		//cout << i << " is a factor of 600851475143 " << endl;
		x = i - 1 ;
		int isPrime = 1; 
		for( long j = 2 ; j <= x ; j++   ){

			if(i % j == 0){
				isPrime=0;
				break;
			}			
		}
		if(isPrime==1){
			cout<< i << " is a Prime Factor" << endl;
		}
	}

	i++;
}

return 0;
}
