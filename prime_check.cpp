#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number:\n";
    cin >> n;
    bool flag = 0;
    for (i = 2; i <=sqrt(n); i++)
    {
        if(n%i==0){
            cout << "Not a prime";
            flag = 1;
            break;
        }
    }
    if(flag==0){
    cout << "Prime Number";}
    return 0;
}