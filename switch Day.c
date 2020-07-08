#include <stdio.h>
int main(){
    int day = 28;
    int month= 1;
    int year= 2020;

    switch (month){
    case 0:
      if (day == 31){
        day = 1; month = month+1;
      }else {day = day+1;}

      break;

    case 2:
      if (day == 31){
        day = 1; month = month+1;
      }else {  day = day+1;}
      break;

    case 4:
      if (day == 31){
        day = 1; month = month+1;
      }else {  day = day+1;}
      break;

      case 6:
      if (day == 31){
        day = 1; month = month+1;
      }else {  day = day+1;}
      break;

      case 7:
      if (day == 31){
        day = 1; month = month+1;
      }else {  day = day+1;}
      break;

      case 9:
      if (day == 31){
        day = 1; month = month+1;
      }else { day = day+1;}
      break;

      case 3:
      if (day == 30){
        day = 1; month = month+1;
      }else {day = day+1;}
      break;

      case 5:
      if (day == 30){
        day = 1; month = month+1;
      }else {day = day+1;}
      break;

      case 8:
      if (day == 30){
        day = 1; month = month+1;
      }else {day = day+1;}
      break;

      case 10:
      if (day == 30){
        day = 1; month = month+1;
      }else {day = day+1;}
      break;

      case 11:
      if (day == 31){
        day = 1; month = 1; year = year+1;
      }else {day = day+1;}
      break;

      case 1:
        if (day == 28){
        day = 1; month = month+1;
        }else if (day == 29){
        day = 1; month = month+1;
        }else{day = day+1;}
        break;
//    case 30:
//      printf("yesterday %d",day);
//      statements
//      break;
    }
    printf("Tomorrow %d/%d/%d",day,month,year);
    return 0;
}
