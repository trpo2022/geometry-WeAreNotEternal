#include <iostream>
#include "SP.h"
#include "Check.h"
#include "otobraj.h"
using namespace std;
int otobraj()
{
    int x1, y1, r1, x2, y2, r2;
    cout << " x1: ";
    cin >> x1;
    cout << " y1: ";
    cin >> y1;
    cout << " r1: ";
    cin >> r1;
    circle(x1, y1, r1);
    cout << endl;
    cout << " x2: ";
    cin >> x2;
    cout << " y2: ";
    cin >> y2;
    cout << " r2: ";
    cin >> r2;
    circle(x2, y2, r2);
    cout << endl;
    int art = check(x1, x2, y1, y2, r1, r2);
    if (art == 1)
        cout << "peresekautsa ";
    if (art == 0)
        cout << "ne peresekautsa ";
    return (art);
}
