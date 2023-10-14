#include <iostream>
#include "Concert.h"

int main()
{
    Concert testRun;
    Concert testRun2("Mystery Skulls", 5000);



    std::cout << testRun.getArtistName();
    std::cout << testRun2.getArtistName();
    return 0;
}
