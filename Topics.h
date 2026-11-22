#ifndef TOPICS_H
#define TOPICS_H


using namespace std;
#include <iostream>
#include <string>
#include <vector>


class topics{
    public:
        void setInfo(string info);
        void setTitle(string title);
        void setYearMade(int yearMade);
        void setImage(string image);

        string getInfo();
        int getYear();
        string getTitle();
        string getImage();

    private:
        string info = "N/A";
        string title = "N/A";
        int yearMade = -1;
        string image = "N/A";
};


vector<topics> setTopics();


#endif