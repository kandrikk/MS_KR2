#pragma once

#include <iostream>
#include <vector>

class Box
{
private:
    std::vector<int> infoBox = {0, 0, 0};

public:
    Box(int len, int width, int high);
    ~Box();
    friend class FriendBox;
};

class FriendBox
{
public:
    void print(const Box& box);
};