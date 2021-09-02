#include<iostream>
#include<math.h>
using namespace std;

int main () {
int n;
cin>>n;
int originaln = n;
int sum=0;
while (n>0){


int lastdigit = n%10;
sum += pow(lastdigit, 3);
n=n/10;




}
if (originaln == sum){


cout<<"the number is an armstrong number";

}
else {


cout<<"the number is not armstrong";
}

return 0;
}
