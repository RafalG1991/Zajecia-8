#include <iostream>
#include "Wektor.h"

using namespace std;

int main() {
    Wektor wektor1(2, 3);

    Wektor wektor2 = !wektor1;
    cout << "Wektor przeciwny do: [" << wektor1.x << ", " << wektor1.y << "]" << " to: [" << wektor2.x << ", " << wektor2.y << "]" << endl;

    Wektor wektor3 = ++wektor1;
    cout << "Wektor ++ do: [" << wektor1.x << ", " << wektor1.y << "]" << " to: [" << wektor3.x << ", " << wektor3.y << "]" << endl;

    Wektor wektor4 = wektor1 + wektor2;
    cout << "Wektor1: [" << wektor1.x << ", " << wektor1.y << "]" << " + Wektor2: [" << wektor2.x << ", " << wektor2.y << "]" " to: [" << wektor4.x << ", " << wektor4.y << "]" << endl;

    double iloczynSkalarny = wektor1 * wektor2;

    cout << "Iloczyn skalarny wektora 1: [" << wektor1.x << ", " << wektor1.y << "]" << " oraz wektora 2: [" << wektor2.x << ", " << wektor2.y << "]" " to: " << iloczynSkalarny << endl;

    Wektor wektor5 = 10 * wektor1;
    cout << "Iloczyn wektora 1: [" << wektor1.x << ", " << wektor1.y << "]" << " przez liczbe 10 to: [" << wektor5.x << ", " << wektor5.y << "]" << endl;

    return 0;
}