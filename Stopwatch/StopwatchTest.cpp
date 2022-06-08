////////////////////////////////////////////////////////////////////////////////
//
// Testing the Stopwatch class.
//
// By Giovanni Dicanio
//
////////////////////////////////////////////////////////////////////////////////


#include "Stopwatch.h"      // Class to test
#include <Windows.h>        // For Sleep()
#include <iostream>         // For cout

using std::cout;
using win32::Stopwatch;


int main()
{
    // Stopwatch object used to measure time intervals
    Stopwatch sw;   

    // Record start time
    //sw.Start();
    auto startTick = sw.Counter();
    
    // Portion of code to be timed
    ::Sleep(1000);  // Just wait for 1,000 ms (1 second)
    
    // Record end time
    auto stopTick = sw.Counter();

    // Print timing results
    //cout << "Elapsed time: " << sw.ElapsedMilliseconds() << " ms\n";
    cout << "Elapsed time: " <<  sw.ElapsedMilliseconds(startTick, stopTick) << " ms\n";
}

