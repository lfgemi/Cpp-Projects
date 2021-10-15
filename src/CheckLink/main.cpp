#include <Windows.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>

using namespace std;


const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%d/%m/%Y %X", &tstruct);

    return buf;
}

int main()
{
    
    while (1 == 1)
    {
        int i = system("ping 8.8.8.8");

        if (i == 0)
        {
            cout << "up   "<< currentDateTime() << endl;
        }
        else
        {
            cout << "down "<< currentDateTime()<< endl;
        }
        Sleep(1000);
    }

}
