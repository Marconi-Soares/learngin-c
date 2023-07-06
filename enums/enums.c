#include <stdio.h>

enum Day{Sun = 0, Mon = 1, Tue = 2, Wed = 3, Thu = 4, Fri = 5, Sat = 6};

int main()
{
    enum Day today = Sat;

    if (today == Sun || today == Sat) 
    {
        printf("\nIt's weekend!");
    }
    else
    {
        printf("\nIt's work day!");
    }

    return 0;
}
