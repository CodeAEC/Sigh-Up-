#include <iostream>
#include <string>
#include "Account sigh up.cpp"

int main(){
    sigh_up user = email();


    std::cout << "Sigh up complete! \n";
    std::cout << "============================\n";

    std::cout << "          Log in            \n";
    std::cout << "Email or Name: ";

    // Getting users input (Email and Password)
    std::string name_check;
    std::string pass_check;

    std::cout << "          Log in            \n";
    // Getting user Email or Name
    std::cout << "Email or Name: ";
    std::cin >> name_check;

    //Getting Users Password
    std::cout << "Password: ";
    std::cin >> pass_check;

    // checking if the user or email is correct
    while((name_check != user.name && name_check != user.email) || pass_check != user.password) {
            std::cout << "Wrong Name or Password \n";
            std::cout << "Name: ";
            std::cin >> name_check;
            std::cout << "Password: \n";
            std::cin >> pass_check;
            if(name_check == user.name || name_check == user.email || pass_check == user.password){
                break;
            }



    }


    return 0;


}
