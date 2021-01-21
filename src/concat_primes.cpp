/** 
    @mainpage Concat Primes

    @author Samuel chang and Caswell King

    Outputs a string of 5 characters starting from the nth prime
*/

/** \file concat_primes.cpp
    \brief     Outputs a string of 5 characters starting from the nth prime
    
    Generates a list of primes first up to 1000 chars
	Reads starting from the nth place given
	Only reads up to the first 5 chars

    Requires: C++11
*/


#include<iostream>
#include<string>


/** \brief Returns a string of all the primes concanated up to 1000 chars
   
   Uses the sieve of Eratosthenes using the modern methods of squares
   Goes up to 1980 since a concanated list of primes reaches 1000 chars at 1987

    @return std::string
*/
std::string get_concatenated_primes()
{
	int nLimit = 1980; //Found from a list of primes where 1987 concanated producues 1000 chars
	int iFirstPrime = 2; //First prime for temporary use
	std::string concat_primes = "";

	bool arrbPrime[nLimit + 1]; //Bool array for checking off non-primes
	for (int i = 0; i < nLimit + 1; i++) //Setting the entire array to true
	{
		bPrime[i] = true
	}
	arrbPrime[0] = false; //Making sure 0 and 1 are false since they're non-prime
	arrbPrime[1] = false;

	for (int i = 2; i < 44; i++) //Sieve of Eratosthenes from https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
	{
		if (arrbPrime[i] == true)
		{
			for (int j = 0; (i^2 + j*i) < nLimit + 1; j++)
			{
				arrbPrime[i ^ 2 + j * i] = false;
			}
		}
	}

	for (int i = 0; i < nLimit + 1; i++) //Checks for primes left from sieve, and adds it onto the concat primes list
	{
		if (arrbPrime[i] = true)
		{
			concat_primes = concat_primes + std::to_string(i);
		}
	}

    return concat_primes.substr(0, 1000);
}


std::string get_slice_of_5(const std::string & primes, const int index)
{
    std::string ret = "";
    //Complete this function
    return ret;
}

int main(int argc, char *argv[]){
    using namespace std;
    int n;
    string concat_primes;
    if (argc >= 2){
        concat_primes = get_concatenated_primes();
        assert(get_slice_of_5(concat_primes, 3) == "71113");
        cout<<"Unit Test 1 passed\n";
        assert(get_slice_of_5(concat_primes, 6) == "13171");
        cout<<"Unit Test 2 passed\n";
        
        //Please add 3 more unit test here/
    } else{
        cout<< "Please input n: ";
        while(std::cin >> n)
        {
            concat_primes = get_concatenated_primes();
            std::cout << get_slice_of_5(concat_primes, n) << std::endl;
            cout<< "Please input n: ";
        }
    }
    return 0;
}
