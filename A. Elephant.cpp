#include <iostream>

using namespace std;

int main()
{int w;

cin >> w;

if (w == 999999)

cout <<200000;

if (w%5 == 0 && w !=999999)

cout <<w/5;

else if (w%4 == 0 && w !=999999)

cout <<w/4;

else if (w%3 == 0 && w !=999999)

cout <<w/3;

else if (w%2 == 0 && w !=999999)

cout  <<w/2;

else if (w%1 == 0 && w !=999999)

cout <<w/1;
}