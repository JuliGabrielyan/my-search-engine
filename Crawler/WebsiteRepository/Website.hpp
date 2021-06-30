#ifndef WEBSITE_HPP
#define WEBSITE_HPP
#include <string>

class Website
{
private:
    int websiteId;
    std::string domain;
    std::string homepage;
    bool crawled; 

public:
    Website(int websiteId, std::string domain, std::string homepage, bool crawled);
    int getWebsiteId() const;
    const std::string& getDomain() const;
    const std::string& getHomepage() const;
    bool isCrawled() const;
    time_t getLastCrawledTime();
};

#endif