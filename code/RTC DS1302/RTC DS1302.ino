#include <virtuabotixRTC.h>

// Initial Date Time Configuration
#define YEAR 2023
#define MONTH 2
#define DAY 3
#define HOUR 11
#define MINUTE 15
#define SECOND 15
#define DAY_OF_WEEK 5

// Pin Declaration
#define RST 6
#define CLK 7
#define GDT 8

// Creation of the Real Time Clock Object
virtuabotixRTC myRTC(6, 7, 8);

void setup()  {
  // Initialize the Serial monitor
  Serial.begin(9600);

  // Set the current date, and time in the following format:
  // seconds, minutes, hours, day of the week, day of the month, month, year
  myRTC.setDS1302Time(SECOND, MINUTE, HOUR, DAY_OF_WEEK, DAY, MONTH, YEAR);
}

void loop()  {
  // This allows for the update of variables for time or accessing the individual elements.
  myRTC.updateTime();

  int month = myRTC.month;
  int year = myRTC.year;
  int day = myRTC.dayofmonth;
  int hours = myRTC.hours;
  int minutes = myRTC.minutes;
  int seconds = myRTC.seconds;

  // Start printing elements as individuals
  Serial.print("Current Date / Time: ");
  Serial.print(month);
  Serial.print("/");
  Serial.print(year);
  Serial.print("  ");
  Serial.print(hours);
  Serial.print(":");
  Serial.print(minutes);
  Serial.print(":");
  Serial.println(seconds);

  // Delay so the program doesn't print non-stop
  delay(500);
}