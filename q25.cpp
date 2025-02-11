//write a program to check whether a given number is palindrome or not.
#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int r=0, o=n;
    for(;n>0;n/=10) r=r*10+n%10;
    return o==r;
}

int main(){
    int n; cout<<"Enter a number: "; cin>>n;
    cout<<n<<(isPalindrome(n)?" is a palindrome.":" is not a palindrome.")<<endl;
}