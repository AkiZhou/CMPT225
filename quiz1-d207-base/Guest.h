
#pragma once 

#include <string>

using namespace std;

// Desc:  Represents a guest 
class Guest {
    private:
        string name;
        int priority; // (key)
    public:
        // Desc:  Constructors
        Guest() : name(""), priority(0) {};
        Guest(string name, int priority) : name(name), priority(priority) {};

        // Desc:  Accessors
        const string &Name() const { 
            return name; 
        };
        const int &Priority() const { 
            return priority; 
        };
        string &Name() { 
            return name; 
        };
        int &Priority() { 
            return priority; 
        };

        // Desc:  Comparators
        //        Compare by priority (key)
        bool operator<(const Guest &r) { return (priority < r.priority); };
        bool operator>(const Guest &r) { return (priority > r.priority); };
        bool operator<=(const Guest &r) { return (priority <= r.priority); };
        bool operator>=(const Guest &r) { return (priority >= r.priority); };
        bool operator==(const Guest &r) { return (priority == r.priority); };
        bool operator!=(const Guest &r) { return (priority != r.priority); };

};

