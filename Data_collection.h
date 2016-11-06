#ifndef DATA_COLLECTION_H_INCLUDED
#define DATA_COLLECTION_H_INCLUDED
#include "rs232.h"
#include "fstream"
int Data_gain (std::string Command)
{


  std::ofstream datalog( "datalog.txt" );
       datalog.open( "datalog.txt", std::ios::in | std::ios::out );
       if( datalog.good() == true )
       {
           std::cout << "            Data loggin file works fine" << std::endl;
           //tu operacje na pliku
       } else std::cout << "            Data loggin file went to hell" << std::endl;




    int i, n, cport_nr,bdrate;
            if(Command.substr(0,7) == "portset")
                   {

                     std::string converthelper;
                     converthelper = Command.substr(8,10);
                            cport_nr = atoi( converthelper.c_str() );
                 }
      else{     cport_nr=16; }
          bdrate=9600;       /* 9600 baud */

      unsigned char buf[4096];

      char mode[]={'8','N','1',0};


      if(RS232_OpenComport(cport_nr, bdrate, mode)  )
      {


        return(0);
      }
      else {printf("Comport opened succefully."); }

      while(1 || (Command == "log usb data"))
      {
        n = RS232_PollComport(cport_nr, buf, 4095);

        if(n > 0)
        {
          buf[n] = 0;   /* always put a "null" at the end of a string! */

          for(i=0; i < n; i++)
          {
            if(buf[i] < 32)  /* replace unreadable control-codes by dots */
            {
              buf[i] = '.';
            }
          }

                      printf("%s\n",  (char *)buf);
                      datalog << (char *)buf;

        }

    #ifdef _WIN32
        Sleep(100);
    #else
        usleep(100000);  /* sleep for 100 milliSeconds */
    #endif
      }







 datalog.close();
    std::cout << "Data succefully gained from device!" <<std::endl;
    return 0 ;
}

#endif // DATA_COLLECTION_H_INCLUDED
