#include <iostream>
#include "Lift.h"
using namespace std;



int main()
{
    
    Lift lift;
    lift.printInfo();
    while(true) {
        int i;
        cin >> i;
        switch (i) {
        case -100:
            lift.off();
            break;
        case 999:
            lift.on();
            break;
        default:
            lift.call(i);
            break;
        }
        lift.printInfo();
    }

}

