#ifndef LINKINFO_HPP
#define LINKINFO_HPP

#include "LinkStatus.hpp"

#include <string>
#include <ctime>

class LinkInfo
{
private:
    std::string url;
    int websiteId;
    LinkStatus status;

public:
    LinkInfo(std::string url, int websiteId, LinkStatus status);

    const std::string& getUrl() const;
    int getWebsiteId() const;
    LinkStatus getStatus() const;
};

#endif