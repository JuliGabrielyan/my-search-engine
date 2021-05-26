#ifndef WEB_SITE
#define WEB_SITE

#include <string>
#include <vector>
#include <ctime>

class WebSite
{
private:
    std::string domain;
    std::string homePage;
    std::time_t lastCrawleTime;

public:
    WebSite(const std::string& domain, const std::string& homePage, std::time_t time);

    std::string getDomain() const;
    std::string getHomePage() const;
    std::time_t getLastCrawleTime() const;
};

#endif