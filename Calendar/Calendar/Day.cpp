#include "stdafx.h"
#include "Day.h"

void Day::addEvent(std::string time, std::string name)
{
	eventTime.push_back(time);
	eventTime.push_back(name);

	//writeToFile();
}

void Day::checkEvent(int opt)
{

}

void Day::deleteEvent(std::string time, std::string name)
{
	int deleteCheck = 0;
	for (int i = 0; i < eventTime.size(); i++) {
		if ((eventTime.at(i) == time) && (eventName.at(i) == name)) {
			eventTime.erase(eventTime.begin() + i);
			eventName.erase(eventName.begin() + i);
			deleteCheck = 1;
		}
	}
	//if (deleteCheck == 1)
		//writeToFile();
}
