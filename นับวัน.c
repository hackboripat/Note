#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>

void WeekDay (int var_WeekDay);
void Month (int var_Month);


//**********************************************************************************
int main()
{
    enum type_WeekDay {SunDay,MonDay,Tuesday,WednesDay,ThursDay,FriDay,SaturDay};
    enum type_Month {Jan,Fed,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

    int var_WeekDay     = WednesDay;
    int var_Day         = 20;
    int var_Month       = Jan;
    int var_Year        = 2020;

    char keyPress;
    bool leapYear = false;

    while (1)
    {

        keyPress = getch();

        if (keyPress == 27 ) // ESC
        {
            exit(0);
        }

        if (var_WeekDay == SaturDay)
        {
            var_WeekDay = SunDay ;
        }else
        {
            var_WeekDay ++;
        }

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

            switch (var_Month)
        {

            case 0:
            if (var_Day == 31)
            {
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------

            case 2:
            if (var_Day == 31)
            {
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------

            case 4:
            if (var_Day == 31){
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------

            case 6:
            if (var_Day == 31)
            {
                var_Day = 1; var_Month++;
            }else
            {
                var_Day = var_Day+1;
            }
                break;

//--------------------------------------------------------------------------------

            case 7:
            if (var_Day == 31)
            {
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------

            case 9:
            if (var_Day == 31)
            {
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

            case 3:
            if (var_Day == 30)
            {
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------

            case 5:
            if (var_Day == 30)
            {
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------

            case 8:
            if (var_Day == 30)
            {
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------

            case 10:
            if (var_Day == 30)
            {
                var_Day = 1; var_Month ++;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

            case 11:
            if (var_Day == 31)
            {
                var_Day = 1;    var_Month = Jan;    var_Year = var_Year+1;
            }else
            {
                var_Day = var_Day+1;
            }
            break;

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

            case 1:

                leapYear = false;

                if      (var_Year % 400 == 0)
                {
                    leapYear = true;
                }
                else if (var_Year % 100 == 0)
                {
                    leapYear = false;
                }
                else if (var_Year % 4   == 0)
                {
                    leapYear = true;
                }

//--------------------------------------------------------------------------------

                if (leapYear == true)
                {

                    if ( var_Day == 29 )
                    {
                        var_Day = 1 ;   var_Month ++;
                    }else
                    {
                        var_Day = var_Day+1;
                    }

                }else
                {
                    if (var_Day == 28 )
                    {
                        var_Day = 1;    var_Month ++;
                    }else
                    {
                        var_Day = var_Day+1;
                    }
                }

            break;

//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------
//--------------------------------------------------------------------------------

        }
        print(var_WeekDay,var_Day,var_Month,var_Year);
    }

    return 0;
}

//**********************************************************************************
void print (int var_WeekDay,int var_Day ,int var_Month , int var_Year)
{
    WeekDay     (var_WeekDay);
    printf      ("   %d/",var_Day);
    Month       (var_Month);
    printf      ("/%d\n",var_Year);
}

//**********************************************************************************
void WeekDay (int var_WeekDay)
{

    if (var_WeekDay == 0)
    {
        printf("SunDay");
    }else
    if (var_WeekDay == 1)
    {
        printf("MonDay");
    }else
    if (var_WeekDay == 2)
    {
        printf("Tuesday");
    }else
    if (var_WeekDay == 3)
    {
        printf("WednesDay");
    }else
    if (var_WeekDay == 4)
    {
        printf("ThursDay");
    }else
    if (var_WeekDay == 5)
    {
        printf("FriDay");
    }else
    if (var_WeekDay == 6)
    {
        printf("SaturDay");
    }
}

//**********************************************************************************
void Month (int var_Month)
{

    if (var_Month == 0)
    {
        printf("Jan");
    }else
    if (var_Month == 1)
    {
        printf("Fed");
    }else
    if (var_Month == 2)
    {
        printf("Mar");
    }else
    if (var_Month == 3)
    {
        printf("Apr");
    }else
    if (var_Month == 4)
    {
        printf("May");
    }else
    if (var_Month == 5)
    {
        printf("Jun");
    }else
    if (var_Month == 6)
    {
        printf("Jal");
    }else
    if (var_Month == 7)
    {
        printf("Aug");
    }else
    if (var_Month == 8)
    {
        printf("Sep");
    }else
    if (var_Month == 9)
    {
        printf("Oct");
    }else
    if (var_Month == 10)
    {
        printf("Nov");
    }else
    if (var_Month == 11)
    {
        printf("Dec");
    }
}
