#include <iostream>
using namespace std;
int main() {
    // char grade;
    // cout <<"Enter your grade:" <<endl;
    // cin >>grade;

    // if(grade == 'A') {
    //     cout <<"your marks will be a range of 90 to 100" <<endl;
    // }
    // else if(grade =='B'){
    //     cout <<"your marks will be a range of 80 to 90" <<endl; ;
    // }
    // else if(grade =='C'){
    //     cout <<"your marks will be a range of 70 to 80" <<endl;
    // }
    // else if(grade =='D'){
    //     cout <<"your marks will be a range of 60 to 70" <<endl;
    // }
    // else {
    //     cout <<"your marks will be a range of 0 to 60" <<endl;
    // }
 
    // implement user input for day switch-case
    int day;
     cout<<"enter the days (1 to 7)" <<endl;
    cin>>day;
    switch(day){
        case 1:cout<<"Monday" <<endl;
        break;
        case 2: cout<<"Tuesday" <<endl;
        break;
        case 3: cout<<"Wednesday" <<endl;
        break;
        case 4: cout<<"Thursday" <<endl;
        break;
        case 5: cout<<"Friday" <<endl;
        break;
        case 6: cout<<"Saturday" <<endl;
        break;
        case 7: cout<<"Sunday" <<endl;
        break;
        default: cout<<"Weekend" <<endl;
    }
return 0;
}