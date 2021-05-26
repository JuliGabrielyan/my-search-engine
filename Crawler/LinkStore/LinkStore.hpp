#ifndef LinkStore.hpp
#define LinkStore.hpp

#include<vector>
#include<string>
#include<optional>
#include"Link.hpp"


class LinkStore {

    private:

        std::vector<Link> all;

    public:

        const std::vector<Link>& getAll() const;

        std::optional<Link> getBy(const std::string& url) const;
        
        std::vector<Link> getBy(const std::string& domain, const LinkStatus status, std::size_t size) const;

        void add(const Link& link);

        void update(const Link& link)
}

#endif