#ifndef PageLoader_hpp
#define PageLoader_hpp

#include <curl/curl.h>
#include "Page.hpp"

class PageLoader {
    
public:

    Page load (const std::string& url);

public:

    static std::size_t write_data(void* ptr, std::size_t size, std::size_t nmemb, std::string* data);

    
};

#endif 