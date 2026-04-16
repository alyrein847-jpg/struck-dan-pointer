#include "circle.h"
#include <iostream>
using namespace std;

int main(){
    Circle lingkaran;
    Point titik;

    cout << "Masukkan nilai Cx dan Cy: ";
    cin >> lingkaran.center.x >> lingkaran.center.y;

    cout << "Masukkan nilai radius: ";
    cin >> lingkaran.radius;

    cout << "Masukkan nilai Xp dan Yp: ";
    cin >> titik.x >> titik.y;

    double r2 = lingkaran.radius * lingkaran.radius;
    double jarak = distance(&lingkaran, &titik);

    cout << CheckPointInCircle(jarak, r2) << endl;

    return 0;
}