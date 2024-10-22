#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    do
    {
        printf("i = %d\n", i);
        i++;
        if (i == 10)
        {
            break;
        }
    } while (i < 10);
}