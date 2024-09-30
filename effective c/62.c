#include <stdio.h>

struct TIME
{
int seconds;
int minutes;
int hours;
};

void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff)
{
    if (t2.seconds > t1.seconds)
    {
        --t1.minutes;
        t1.seconds +=60;
    }
   diff->seconds = t1.seconds - t2.seconds;
   if (t2.minutes > t1.minutes)
   {
    --t1.hours;
    t1.minutes +=60;
   }
   diff->minutes = t1.minutes - t2.minutes;
   
   diff->hours = t1.hours - t2.hours;

};

int main()
{
    struct TIME startTime, stopTime, diff;
    printf("Arriving time: \nEnter hours, minutes, seconds");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Leaving time: \nEnter hours, minutes, seconds");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);    
    differenceBetweenTimePeriod(startTime, stopTime, &diff);
    printf("the difference is %d:%d:%d", diff.hours, diff.minutes, diff.seconds);

    return 0;
}