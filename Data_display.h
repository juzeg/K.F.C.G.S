#ifndef DATA_DISPLAY_H_INCLUDED
#define DATA_DISPLAY_H_INCLUDED

int Data_show (std::string Command)
{
  std::cout << "Managig some data stuff in bacground " << std::endl ;

    if ( Command.substr(0,4) == "data")
    {

    std::cout << "Data succesfully displayed! "<< Command.substr(5) <<std::endl;
    }
    return 0;
}

#endif // DATA_DISPLAY_H_INCLUDED
