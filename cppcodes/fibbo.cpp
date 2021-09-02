#include<iostream>

using namespace std;

int main () {

int n;
cin>>n;

int a = 0;
int b =1;
int temp;

for (int i=1;i<=n;i++){
temp = a+b;
a = b;
b = temp;


}
cout<<a;

return 0;
}
