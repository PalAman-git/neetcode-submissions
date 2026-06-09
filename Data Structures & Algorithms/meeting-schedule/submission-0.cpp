/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;power
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        if (intervals.empty()) return true;
        sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
            return a.start < b.start;
        });

        for(int i=0;i<(int)intervals.size() - 1;i++){
            int start1 = intervals[i].start;
            int end1 = intervals[i].end;
            int start2 = intervals[i+1].start;
            int end2 = intervals[i+1].end;

            if(end1 > start2) return false;
        }

        return true;
    }
};