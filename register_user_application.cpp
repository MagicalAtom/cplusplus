#include <iostream>
using namespace std;

int main(){
    string name;
    string email;
    string password;
    string passwordConfirmation;

    cout << "please insert your name : ";
    cin >> name;

    // get email

    cout << "please insert your email : ";
    cin >> email;

    //get password;

    cout << "please insert your password : ";
    cin >> password;

    // get passwordConfirmation
    cout << "please insert your passwordConfirmation :  ";
    cin >> passwordConfirmation;


    if (!email.empty() && !name.empty() && !password.empty() && !passwordConfirmation.empty()){
        if (password != passwordConfirmation){
            cout << "password and passwordConfirmation not correct";
        }else{
            cout << "Register User Successful! :)";
        }
    }

}
