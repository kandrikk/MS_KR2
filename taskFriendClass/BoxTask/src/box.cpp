#include "../include/box.h"

Box::Box(int l, int w, int h)
{
    len = l;
    width = w;
    high = h;
}


Box::~Box()
{
    len = 0;
    width = 0;
    high = 0;
};

void FriendBox::print(const Box& box)
{
    std::cout << box.len << " " 
    << box.width << " "  
    << box.high 
    << std::endl;
}

void VolumeBox::volume(const Box& box)
{

    int ob = box.len * box.high * box.width;
    std::cout << ob << std::endl;
}

void reconst(Box& box)
{
    int x, y, z;
    std::cout << "Стороны box -";
    std::cin >> box.len >> box.width >> box.high;
}