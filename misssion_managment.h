#ifndef MISSSION_MANAGMENT_H_INCLUDED
#define MISSSION_MANAGMENT_H_INCLUDED
#include <fstream>
int Mission_protocol ()
{
     bool data_saving_succes;
     ofstream log_file( "flight_log.txt" );
     
     
     
     
     
     
     
     
     if (data_saving_succes == TRUE) 
     {
     std::cout << "Data succesfully saved" <<std::endl:
     return 1;
    }
     else 
     {std::cout << "Data was unable to be saved correctly" << std::endl ;
     return 0;}
}


#endif // MISSSION_MANAGMENT_H_INCLUDED
