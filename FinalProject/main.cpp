#include <iostream>
#include "rectangle.h"
using namespace std;


int main()
{
    Rectangle rect(10,20);
    int area = rect.GetArea();
    cout << "The Area = " <<area<< endl;
    return 0;
}
