/************************************************************************************
 * An application file which implements queueing with queue and prints statistics   *
************************************************************************************/
#include "queue.cpp"
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <utility>

// randNum function definition
int randNum(int low, int high)
{
    int temp = rand();
    int num = temp % (high - low + 1) + low;
    return num;
}

int main()
{
    // variable declaration
    int size = 15;
    int arriveDelay;
    int serveTime;
    int arrive = 0;
    int start = 0;
    int leave = 0;
    int wait = 0;
    int totalServeTime = 0;
    int totalWait = 0;
    // Queue object instantiation
    Queue<pair<int, int>> line;
    // random client behavior setting
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        pair<int, int> p(randNum(1, 6), randNum(5, 10));
        line.push(p);
    }
    // statistics header output
    cout << left << setw(10) << "Arrive" << setw(10) << "Start";
    cout << left << setw(10) << "Delay" << setw(10) << "Leave";
    cout << left << setw(10) << "Serve time" << endl;
    // calculate statistics and print
    while (line.size() > 0)
    {
        arriveDelay = line.front().first;
        serveTime = line.front().second;
        arrive += arriveDelay;
        if (arrive >= leave)
        {
            start = arrive;
        }
        else
        {
            start = leave;
        }
        leave = start + line.front().second;
        wait = start - arrive;
        cout << left << setw(10) << arrive << setw(10) << start;
        cout << left << setw(10) << wait << setw(10) << leave;
        cout << left << setw(12) << serveTime << endl;
        totalServeTime += serveTime;
        totalWait += wait;
        line.pop();
    }
    // statictics output
    double averageWait = static_cast<double>(totalWait) / size;
    cout << "--------------------------------------------------" << endl;
    cout << "Total service time : " << totalServeTime << endl;
    cout << "Average waiting time : " << averageWait << endl;
    return 0;
}