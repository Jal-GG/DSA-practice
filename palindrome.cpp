//not solved

#include<bits/stdc++.h>
using namespace std;

void palindrome(int n){
int num =n;
int reverse=0;
while (num!=0)
{
    int digit= num%10;
    reverse = reverse*10+digit;
    num/10;
}
if (reverse=n)
{
    cout<<"it is a palindrome";
}
else
{
    cout<<"not a palindrome";
}
}
int main(){
    int n;
    cin >> n;
    palindrome(n);
}
