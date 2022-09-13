#include<iostream>
using namespace std;
int fibonacci(int n){
    if (n==1||n==0)
        return n;
    else
       return (fibonacci(n-2) + fibonacci(n - 1));
}
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {    
    cout << fibonacci(i)<<" ";
    }
    return 0;
}