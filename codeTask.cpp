#include <iostream>
#include <string>

using namespace std;

int main()
{

    // test 1anser
    int num;
    cin >> num;
    while (num != -1)
    {
        int speed, time, distance = 0, preTime = 0;
        for (int i = 0; i < num; i++)
        {
            cin >> speed >> time;
            distance += speed * (time - preTime);
            preTime = time;
        }
        cout << distance << " miles" << endl;
        cin >> num;
    }
 
    return 0;
}
