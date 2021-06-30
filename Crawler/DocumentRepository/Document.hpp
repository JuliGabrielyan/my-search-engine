#ifndef DOCUMENT_HPP
#define DOCUMENT_HPP

#include <string>

class Document
{
private:
    std::string url;
    std::string title;
    std::string description;
    std::string content;

public:
    Document(std::string url, std::string title, std::string description, std::string content);

    const std::string& getUrl() const;
    const std::string& getTitle() const;
    const std::string& getDescription() const;
    const std::string& getContent() const;
};

#endif