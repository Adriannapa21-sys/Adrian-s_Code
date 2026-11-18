#ifndef TOPICS_N
#define TOPICS_N


using namespace std;
#include <iostream>
#include <string>


class topics{
    public:
        void setInfo(string info);
        void setTitle(string title);
        void setYearMade(int yearMade);

    private:
        string info;
        string title;
        int yearMade;
};

#endif