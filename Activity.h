//
// Created by marco on 15/07/19.
//

#ifndef PROGETTOLABORATORIO_ACTIVITY_H
#define PROGETTOLABORATORIO_ACTIVITY_H


#include <string>

struct Time {
    unsigned int hour;
    unsigned int minute;
};

class Activity {
public:
    Activity(std::string description, Time start, Time end) {
        activityDescription = std::move(description);
        checkCorrectTime(start);
        checkCorrectTime(end);
        startTime = start;
        endTime = end;
    }

    Time &checkCorrectTime(Time &wrongTime) {
        if (wrongTime.hour > 24)
            wrongTime.hour = wrongTime.hour % 24;
        if (wrongTime.minute > 60)
            wrongTime.minute = wrongTime.minute % 60;
    }

    const std::string &getActivityDescription() const {
        return activityDescription;
    }

    void setActivityDescription(const std::string &activityDescription) {
        Activity::activityDescription = activityDescription;
    }

    const Time &getStarTime() const {
        return startTime;
    }

    void setStarTime(const Time &startTime) {
        Activity::startTime = startTime;
    }

    const Time &getEndTime() const {
        return endTime;
    }

    void setEndTime(const Time &endTime) {
        Activity::endTime = endTime;
    }

private:

    std::string activityDescription;
    Time startTime;
    Time endTime;
};


#endif //PROGETTOLABORATORIO_ACTIVITY_H
