#ifndef Link_hpp
#define Link_hpp

#include<string>
#include<ctime>

class Link{

private:

        std::string url;

        std::string domain;

        bool isLoaded;

        time_t lastLoadTime;

        int lastStatus;

public:

        time_t getLastLoadTime() const;

}



#endif