#include "stdafx.h"
#include "Day.h"

void Day::addEvent(std::string time, std::string name)
{
	eventTime.push_back(time);
	eventTime.push_back(name);

	writeToFile();
}

void Day::checkEvent(int opt)
{
	std::ifstream fin(fileName);
	while (!fin.eof()) {
		std::string tempTime, tempName;
		getline(fin, tempTime);
		getline(fin, tempName);
		eventTime.push_back(tempTime);
		eventTime.push_back(tempName);

		//add code to print out in Dialog Box

	}
	fin.close();
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
	if (deleteCheck == 1)
		writeToFile();
}

void Day::writeToFile()
{
	std::ofstream fout(fileName);
	for (int i = 0; i < eventTime.size(); i++) {
		fout << eventTime.at(i) << std::endl;
		fout << eventName.at(i) << std::endl;
	}
	fout.close();
}
