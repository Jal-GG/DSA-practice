#include<bits/stdc++.h>
using namespace std;
prime(int n){
    int count=0;
    for (int i = 2; i < n/2; i++)
    {   
        if (n%i==0)
        {
            count++;
        }
         }
         if (count > 0)
        {
            cout << "not prime";
        }
        else 
        cout<<"prime";
        

    
}
int main(){
    int n;
    cin >> n;
    prime(n);
}