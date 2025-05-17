#pragma once

#include <iostream>
#include <vector>

class Box
{
private:
    int len , width, high;

public:
    Box(int len, int width, int high);
    ~Box();
    friend class FriendBox;
    friend class VolumeBox;
    friend void reconst(Box& box);
};

class FriendBox
{
public:
    void print(const Box& box);
};

class VolumeBox
{
public:
    void volume(const Box& box);
};

void reconst(Box& box);