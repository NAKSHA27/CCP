#include <stdio.h>
#include <conio.h>
int_convert_time_in_mins(int hrs,int minutes);
int main()
{
int hrs, minutes, total_mins;
printf("\n Enter the time that you want to convert:");
scanf("%d %d", &hrs, &minutes);
total_mins = convert_time_in_mins(hrs,minutes);
printf("\n Total minutes=%d minutes", total_mins);
return 0;
}
int convert_time_in_mins(int hrs, int mins)
{
 mins = hrs*60 + mins;
 return mins;
}

