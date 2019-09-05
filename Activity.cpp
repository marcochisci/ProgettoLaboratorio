//
// Created by marco on 15/07/19.
//

#include "Activity.h"

bool Activity::checkCorrectTime() const {
    bool correctTime = true;
    if (this->startTime.hour > 24 || this->endTime.hour > 24)
        correctTime = false;
    if (this->startTime.minute > 60 || this->endTime.minute > 60)
        correctTime = false;
    if (this->day > 31 || this->day <= 0)
        correctTime = false;
    if ((this->month == "April" || this->month == "april" || this->month == "June" ||
         this->month == "june" || this->month == "September" || this->month == "september" ||
         this->month == "November" || this->month == "november") && (this->day > 30))
        correctTime = false;
    if ((this->month == "February" || this->month == "february") && (this->day > 28) &&
        (this->year % 4 != 0))
        correctTime = false;
    if ((this->month == "February" || this->month == "february") && (this->day > 29) &&
        (this->year % 4 == 0))
        correctTime = false;
    if (this->month != "January" && this->month != "january" && this->month != "February" &&
        this->month != "february" && this->month != "March" && this->month != "march" &&
        this->month != "April" && this->month != "april" && this->month != "May" &&
        this->month != "may" && this->month != "June" && this->month != "june" &&
        this->month != "July" && this->month != "july" && this->month != "August" &&
        this->month != "august" && this->month != "September" && this->month != "september" &&
        this->month != "October" && this->month != "october" && this->month != "November" &&
        this->month != "november" && this->month != "Dicember" && this->month != "dicember")
        correctTime = false;
    return correctTime;
}