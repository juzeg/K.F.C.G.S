#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Data_collection.h"
#include "Data_display.h"
#include "State_ctrl.h"
#include "misssion_managment.h"
using namespace std;

int main()
{
    std::string Command;
    std::cout << "Baeta orks" << std::endl;



while (Command != "EXIT")
{
           Data_gain();
           Data_show(Command);
           State_controll(Command);
           Mission_protocol();

           std::getline(std::cin, Command);
}


    return 0;
}
