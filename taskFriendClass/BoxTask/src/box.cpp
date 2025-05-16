#include "box.h"

Box::Box(int len, int width, int high)
{
    infoBox = {len, width, high};
}


Box::~Box()
{
    infoBox = {0, 0, 0};
};

void FriendBox::print(const Box& box)
{
    std::cout << box.infoBox[0] << std::endl;
}