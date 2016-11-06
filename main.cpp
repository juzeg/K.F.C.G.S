#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Data_collection.h"
#include "Data_display.h"
#include "State_ctrl.h"
#include "misssion_managment.h"
#include "rs232.h"


using namespace std;

int main()
{
    std::string Command;
    std::cout << "Beta works" << std::endl;



while (Command != "EXIT")
{

           Data_gain(Command);
           Data_show(Command);
           State_controll(Command);
           Mission_protocol();

           std::getline(std::cin, Command);
}













    return 0;
}
