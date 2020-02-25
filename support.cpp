

#include <string>
#include <vector>
#include <list>
#include <deque>
#include <array>
#include <forward_list>

#include <set>
#include <map>

#include <iostream>
#include <iterator>

int main() {

    {
        // bidirectional iterators
        std::vector<char> c(100, 0);
        c.begin();
        c.rbegin();
        c.end();
        c.rend();
        auto p = c.begin();
        ++p;
        p += 5;
        --p;
        p - c.end();
        p[2];
    }

    {
        // bidirectional iterators
        std::list<char> c(100, 0);
        c.begin();
        c.rbegin();
        c.end();
        c.rend();
        auto p = c.begin();
        ++p;
//        p += 5;
        --p;
//        p - c.end();
//        p[2];
    }

    {
        // random-access iterators
        std::deque<char> c(100);
        c.begin();
        c.rbegin();
        c.end();
        c.rend();
        auto p = c.begin();
        ++p;
        p += 5;
        --p;
        p - c.end();
        p[2];
    }


    {
        // random-access iterators
        std::array<char, 100> c;
        c.begin();
        c.rbegin();
        c.end();
        c.rend();
        auto p = c.begin();
        ++p;
        p += 5;
        --p;
        p - c.end();
        p[2];
    }

    {
        // forward iterators
        std::forward_list<char> c(100, 0);
        c.begin();
//        c.rbegin();
        c.end();
//        c.rend();
        auto p = c.begin();
        ++p;
//        p += 5;
//        --p;
//        p - c.end();
//        p[2];
    }
#if 0
    {
        // bidirectional iterators
        std::set<char> c;
        c.begin();
        c.rbegin();
        c.end();
        c.rend();
        auto p = c.begin();
        ++p;
        p += 5;
        --p;
        p - c.end();
        p[2];
    }

    {
        // bidirectional iterators
        std::map<char, int> c;
        c.begin();
        c.rbegin();
        c.end();
        c.rend();
        auto p = c.begin();
        ++p;
        p += 5;
        --p;
        p - c.end();
        p[2];
    }

    {
        // bidirectional iterators
        std::string c(' ', 100);
        c.begin();
        c.rbegin();
        c.end();
        c.rend();
        auto p = c.begin();
        ++p;
        p += 5;
        --p;
        p - c.end();
        p[2];
    }
#endif

    return 0;
}
