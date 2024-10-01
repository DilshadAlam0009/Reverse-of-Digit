#include<iostream>
using namespace std; 
int reverse(int num){
    int ans=0;
    while(num!=0){
        int rem = num % 10;
        num = num/10;
        ans=(ans*10)+rem;
    }
    return ans;
}
int main(){
int n;
cout<<"enter the number to be  reverse : ";
cin>>n;
cout<<"the reverse of number is "<<reverse(n);

return 0;
}