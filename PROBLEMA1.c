
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1, x2;
    float distance, fatigue1, fatigue2;
    scanf("%f", &x1);
    scanf("%f", &x2);
    distance = fabs(roundf((x1-x2)/2));
    fatigue1 = distance*((distance+1)/2);
    distance = (fabs(x1-x2) - distance);
    fatigue2 = distance*((distance+1)/2);
    printf("%d\n",(int)(fatigue1+fatigue2));

    return 0;
}
