//
//  time.cpp
//   selfMade
//
//  Created by yhanag on 10/4/17.
//  Copyright © 2017 yhanag. All rights reserved.
//

#include <ctime>
using namespace std;

void timeDelay(int);

/**
 *  Pause the programme for a while
 *  give timeInerval in milliseconds
 */
void timeDelay(int timeInterval) {
    int CLOCKS_PER_MILLISEC = CLOCKS_PER_SEC / 1000;
    clock_t startClock = clock();
    while (true) {
        clock_t currentClock = clock();
        int timePassed = ((int)currentClock - (int)startClock) / CLOCKS_PER_MILLISEC;
        if (timePassed == timeInterval)
            return;
    }
}
