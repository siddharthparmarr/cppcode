#include<iostream>

using namespace std;

int main() {

int n;
cout<<"Enter the number";
cin>>n;

int isPrime=1;
for (int i=2; i*i<=n;i++){


if (n%i==0){
isPrime=0;
break;
}

}
if (isPrime==1){

cout<<"the number is prime";

}
else {

cout<<"the number is not prime";

}
return 0;
}
