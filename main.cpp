#include <iostream>
#include <string>
#include "Activity.h"
#include "Register.h"


int main() {
    std::string description("Working");
    Time starWork;
    starWork.hour = 2;
    starWork.minute = 30;
    Time endWork;
    endWork.hour = 6;
    endWork.minute = 70;
    Activity firstActivity(description, starWork, endWork);
    std::cout << firstActivity.getActivityDescription() << std::endl;
    std::cout << firstActivity.getEndTime().minute;
    return 0;
}