#include <stdio.h>
#include <string.h>

int main()
{

    char hi[][3] = {"hi0", "hi1", "hi2"};

    // benis[0] = "benis9" will not work because you cannot assign one array to another in C
    //(remember all strings are arrays)

    // Instead strcopy will copy the contents of the selected array (in this case the string benis0)
    // It will then assign new values in benis[0] to our new specified values in our second array
    strcopy(hi[0], "hi9");

    for (int i = 0; i < sizeof(hi) / sizeof(hi[0]); i++)
    {
        printf("%s", hi[i]);
    }

    return 0;
}