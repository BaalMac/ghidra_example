#include <iostream>
#include <string>
using namespace std;


void testing(string Apassword){

    if (Apassword == "password"){
        cout << "flag{example}\n";
    }
    else{
        cout << "You wrong. Try again!\n";
    }
}    

int main(){

    string AttemptPassword;
    cout << "Whats the password?\n";
    cin >> AttemptPassword;
    testing(AttemptPassword);

    return 0;
} 
