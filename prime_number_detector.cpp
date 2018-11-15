//============================================================================
// Name        : prime_number_detector.cpp
// Author      : Mirco Meazzo
// Version     :
// Copyright   : GNU GPL v3
// Description : Simple interactive tool that calculate if the prompted number
//               is prime or not
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;


bool check_prime_funct( int );

int main() {


	int a;


	cout << "Insert the number that you want to check if it's prime or not " << flush;

	cin >> a;


	if ( check_prime_funct(a) == true) {

		cout << a << " is not a prime number" << endl;

	}

	else {

		cout << a << " is a prime number" << endl;

	}


	return 0;

}


bool check_prime_funct( int n ) {

	bool flag = false;


	for( int i = 2; i <= n/2 ; ++i) {


		if ( n % i == 0 ) {

			flag = true;
			cout << "Number can be divided by " << i << endl;

			break;

		}
	}
	return flag;
}
