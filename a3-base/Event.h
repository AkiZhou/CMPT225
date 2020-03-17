
#pragma once 


typedef enum etype { arrival, departure } EventType;


// Desc:  Represents a simulation event
class Event {
    private:



    public:






        // Desc:  Comparators
        bool operator<(const Event &r) const { return /* complete this */ ; };
        bool operator>(const Event &r) const { return /* complete this */ ; };
        bool operator<=(const Event &r) const { return /* complete this */ ; };
        bool operator>=(const Event &r) const { return /* complete this */ ; };

}; // Event

