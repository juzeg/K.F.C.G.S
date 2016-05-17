#ifndef SATELITE_STATE_H_INCLUDED
#define SATELITE_STATE_H_INCLUDED

void check_state()
{
    if (satelite.check)
    {
    std::cout << "Satelite is connected and ready to rock."  << std::endl ;
    }
    else
    {
        std::cout << "Satelite isn't recgonised."  << std::endl ;
    }
}


#endif // SATELITE_STATE_H_INCLUDED
