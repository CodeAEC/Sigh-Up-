#include <iostream>
#include <string>

struct sigh_up{
    std::string name;
    std::string email;
    std::string password;


};


sigh_up email() {
    sigh_up a;
    std::cout << "Please type your name: \n";
    std::cin >> a.name;
    std::cout << "Please enter your email: \n";
    std::cin >> a.email;
    std::cout << "Please type your password: \n";
    std::cin >> a.password;
    return a;


}
