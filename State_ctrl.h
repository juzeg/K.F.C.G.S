#ifndef STATE_CTRL_H_INCLUDED
#define STATE_CTRL_H_INCLUDED

int State_controll (std::string Command)
{


    std::cout << "Managig some state stuff in bacground " << std::endl ;

 if ( Command.substr(0,5) == "state")
 {
    std::cout << "Stages managed succesfully! "<<Command.substr(6)<<std::endl;

 }
    return 0;
}

#endif // STATE_CTRL_H_INCLUDED
