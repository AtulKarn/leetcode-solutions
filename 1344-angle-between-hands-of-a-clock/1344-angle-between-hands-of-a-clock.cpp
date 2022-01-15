class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle = abs(hour*30+minutes/2.0 - minutes*6);
        return min(angle, 360-angle);
    }
};