#include <stdio.h>
long int misteri(int[], int);
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printf("%ld", misteri(a, 5));
    return 0;
}
long int misteri(int x[], int n)
{
    if (n == 1)
        return x[0];
    else
        return x[n - 1] * misteri(x, n - 1);
}

/*
Output:
120
*/