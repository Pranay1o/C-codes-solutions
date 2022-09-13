#include<iostream>
using namespace std;
int main(){
    int a, b, i,j;
    cout << "Enter the lower limit\n";
    cin >> a;
    cout << "Enter the upper limit\n";
    cin >> b;
    for ( i = a; i<b ; i++)
    {
        for (j = 2; j < b;j++){
            if (i%j==0)
            {
                // cout << "Not a Prime\n";
                break;
            }
        }
        if(j==i)
            cout <<i<<endl;
    }
    return 0;
}