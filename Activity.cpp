//
// Created by marco on 15/07/19.
//

#include "Activity.h"

bool Activity::checkCorrectTime(Activity &wrongTime) {
    bool correctTime = true;
    if (wrongTime.startTime.hour > 24 || wrongTime.endTime.hour > 24)
        correctTime = false;
    if (wrongTime.startTime.minute > 60 || wrongTime.endTime.minute > 60)
        correctTime = false;
    if (wrongTime.day > 31 || wrongTime.day <= 0)
        correctTime = false;
    if ((wrongTime.month == "April" || wrongTime.month == "april" || wrongTime.month == "June" ||
         wrongTime.month == "june" || wrongTime.month == "September" || wrongTime.month == "september" ||
         wrongTime.month == "November" || wrongTime.month == "november") && (wrongTime.day > 30))
        correctTime = false;
    if ((wrongTime.month == "February" || wrongTime.month == "february") && (wrongTime.day > 28) &&
        (wrongTime.year % 4 != 0))
        correctTime = false;
    if ((wrongTime.month == "February" || wrongTime.month == "february") && (wrongTime.day > 29) &&
        (wrongTime.year % 4 == 0))
        correctTime = false;
    if (wrongTime.month != "January" && wrongTime.month != "january" && wrongTime.month != "February" &&
        wrongTime.month != "february" && wrongTime.month != "March" && wrongTime.month != "march" &&
        wrongTime.month != "April" && wrongTime.month != "april" && wrongTime.month != "May" &&
        wrongTime.month != "may" && wrongTime.month != "June" && wrongTime.month != "june" &&
        wrongTime.month != "July" && wrongTime.month != "july" && wrongTime.month != "August" &&
        wrongTime.month != "august" && wrongTime.month != "September" && wrongTime.month != "september" &&
        wrongTime.month != "October" && wrongTime.month != "october" && wrongTime.month != "November" &&
        wrongTime.month != "november" && wrongTime.month != "Dicember" && wrongTime.month != "dicember")
        correctTime = false;
    return correctTime;
}