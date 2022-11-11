#include <iostream>
#include <string>
using namespace std;


void testing(string Apassword){

    if (Apassword == "GhidRA_R0ckz"){
        cout << "flag{Congratz_King}\n";
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