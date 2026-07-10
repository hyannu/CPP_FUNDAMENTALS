#include<iostream>
using namespace std;
int main() {

       // Declare a variable to store the grade
    char grade;
     // Ask the user to enter a grade
    cout << "Enter your Grade:" << endl;
    cin >> grade;

        // Check the grade using a switch statement
    switch (grade){
        case 'A':cout << " your marks will be in  range 90 to 100" << endl;
        break;
        case 'B':cout << " your marks will be in  range 80 to 90" << endl;
          break;
        case 'C': cout << " your marks will be in  range 70 to 80" << endl;
          break;
        case 'D': cout << " your marks will be in  range 60 to 70" << endl;
          break;
        // If the grade is not A, B, C, or D
        default:
         cout << " your marks will be in  range 0 to 60" << endl;
    }
    cout << "Than you " << endl;
 return 0;
    }


// DUSRA METHIODS


    #include<iostream>
using namespace std;
int main() {

    char grade;
    cout << "Enter your Grade:" << endl;
    cin >> grade;

        if(grade =='A'){
        cout << " your marks will be in  range 90 to 100" << endl;
    }else if(grade == 'B'){
        cout << " your marks will be in  range 80 to 90" << endl;
    }else if(grade == 'C'){
        cout << " your marks will be in  range 70 to 80" << endl;
    }else if(grade == 'D'){
        cout << " your marks will be in  range 60 to 70" << endl;
    }else{
        cout << " your marks will be in  range 0 to 60" << endl;
    }
        cout << "Than you " << endl;
        return 0;
    }