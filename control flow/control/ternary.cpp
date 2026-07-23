#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter your age: " <<endl;
    cin>>age; 
    (age > 18) ? cout <<"can vote" 
    :cout <<"cannot vote" ;
    return 0;
}