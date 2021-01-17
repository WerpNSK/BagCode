#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    clock_t timer;
    srand(time(0));
    timer = clock();

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            if (i != j)
                for (int k = 0; k < 10; ++k)
                    if (i != k && j != k)
                        cout << i << " " << j << " " << k << endl;

    cout << "Time: " << timer << "  milliseconds" << endl;

    system("pause");
    
}