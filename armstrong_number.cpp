#include<iostream>
#include<math.h>
// Armstrong number: a number whose sum of the cubes of all digits is the number itself
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number to check: ";
    cin >> n;
    int original_number = n;
    while (n>0)
    {
        int lastdigit= n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == original_number)
    {
        cout << "This is an Armstrong Number.";
    }
    else
        cout << "Not an Armstrong number.";
}
