#include<bits/stdc++.h>
using namespace std;
void reverse_num(int n){

    int num = n;
    int reverse=0;
    while (num!=0)
    {
        int digit = num%10;
        reverse=reverse*10+ digit;
        num=num/10;
      cout<< reverse;
    }   
    } 
int main(){
    int n;
    cin >> n;
    reverse_num(n);
}
 
