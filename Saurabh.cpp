#include <iostream>
using namespace std;
int main (){
int n;
cin>>n;
int sum = 0;
int prod =1;
while(n!=0){
int digit = n%10;
int n = n/10;
sum = sum + digit;
prod = prod * digit;
}
int diff;
if (sum>prod){
cout << diff = sum - prod;
}
else if (prod>sum){
cout << diff = prod - sum;
}
else
cout << "0";
}
