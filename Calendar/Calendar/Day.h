

#ifndef DAY_H
#define DAY_H

#include <iostream>
#include <string>
#include <vector>

class Day {
private:
	std::vector <std::string> eventTime;
	std::vector <std::string> eventName;
public:
	//stores the event into the vector and updates the file
	void addEvent(std::string time, std::string name);

	//once the day is clicked, this function returns the events for the day, displays them on the screen and assigns them to eventDetail for faster access
	void checkEvent(int opt);

	//deletes an event (removes the item from the vector and updates the file)
	void deleteEvent(std::string time, std::string name);

	//writes everything to a file
	void writeToFile();
};
#endif // !DAY_H

