#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int key){


for (int i=0;i<n;i++){

if (arr[i]==key){


return i;


}


}
return -1;

}
int main() {
int n;
cout<<"Enter the size of the array ";
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
cout<<"Enter the element {} ", i; 

cin>>arr[i];

}
int key;
cout<<"Enter the key value";
cin>>key;
cout<<linearSearch(arr,n,key)<<endl;
return 0;
}
