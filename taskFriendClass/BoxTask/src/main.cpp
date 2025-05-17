#include "../include/box.h"


int main()
{
    Box korb(2, 2, 4);
    FriendBox printer;
    printer.print(korb);


    VolumeBox obi;
    obi.volume(korb);

    reconst(korb);
    printer.print(korb);
    obi.volume(korb);
}