#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; 

    int sign = 1 ;
    int min = 2147483647;
    int t;
    cin >> n; cin.ignore();

    if ( n == 0 )  min = 0 ;

    for (int i = 0; i < n; i++) 
    {
        cin >> t ; cin.ignore();
        if ( abs(t) == min &&  t >=0)
            sign = 1;
        else if ((abs(t) < min))
        {
            min = abs(t); 
            if( t < 0) sign = -1;
        }
    }
    cout << sign  * min << endl;
}
/*
    Write a program that prints the temperature closest to 0 among input data. 
    If two numbers are equally close to zero, positive integer has to be considered 
    closest to zero (for instance, if the temperatures are -5 and 5, then display 5).

    Your program must read the data from the standard input and write the result on the standard output.
    Display 0 (zero) if no temperatures are provided. Otherwise, display the temperature closest to 0.

*/