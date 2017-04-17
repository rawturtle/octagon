#include <iostream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Timeline {

    private:
        int id_;
        int user_id_;
        vector<int> timeline_items_;
        string event_colour_;
        string meeting_colour_;
        string assignment_colour_;

    public:

        // Constructor
        Timeline(int, vector<int>, string, string, string);

        // Getters
        int getID();
        int getUserID();
        vector<int> getTimelineItems();
        string getEventColour();
        string getMeetingColour();
        string getAssignmentColour();

        // Setters
        void setEventColour(string);
        void setMeetingColour(string);
        void setAssignmentColour(string);

        // Methods
        //void deleteItem(int);
        //void getItem(int,time_t);
        //void getTimeLine(time_t,time_t);
        // updateItem(item_id);
        // addItem(timeline_id,type,start,end,description);

};

// Constructor
Timeline::Timeline(int user_id, vector<int> timeline_items, string event_colour, string meeting_colour, string assignment_colour):
    user_id_(user_id),
    timeline_items_(timeline_items),
    event_colour_(event_colour),
    meeting_colour_(meeting_colour),
    assignment_colour_(assignment_colour) {}

// Getters
int Timeline::getID(){
    return id_;
}

int Timeline::getUserID(){
    return user_id_;
}

vector<int> Timeline::getTimelineItems() {
    return timeline_items_;
}

string Timeline::getEventColour(){
    return event_colour_;
}

string Timeline::getMeetingColour(){
    return meeting_colour_;
}

string Timeline::getAssignmentColour(){
    return assignment_colour_;
}

// Setters
void Timeline::setEventColour(string event_colour) {
    this->event_colour_ = event_colour;
}

void Timeline::setMeetingColour(string meeting_colour) {
    this->meeting_colour_ = meeting_colour;
}

void Timeline::setAssignmentColour(string assignment_colour) {
    this->assignment_colour_ = assignment_colour;
}

int main() {
    vector<int> items;
    Timeline timeline(1, items, "FFFFFF", "FF00FF", "00FFFF");
    cout << timeline.getUserID() << endl;  
    cout << timeline.getEventColour() << endl;  
    cout << timeline.getMeetingColour() << endl;
    cout << timeline.getAssignmentColour() << endl;
    timeline.setAssignmentColour("000000");
    cout << timeline.getAssignmentColour() << endl;
}
