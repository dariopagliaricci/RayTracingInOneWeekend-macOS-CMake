// #ifndef INTERVAL_H
// #define INTERVAL_H

// class interval {
//     public:
//     double min, max;

//     interval() : min(+infinity), max(-infinity) {} //Default interval is empty

//     interval(double min, double max) : min(min), max(max) {}

//     double size() const { 
//         return max - min; 
//     }

//     bool contains(double x) const {
//         return min <= x && x <= max;
//     }

//     bool surrounds(double x) const {
//         return x < min && max < x;
//     }

//     static const interval empty, universe;
// };

// const interval interval::empty = interval(+infinity, -infinity);
// const interval interval::universe = interval(-infinity, +infinity);

// #endif

#ifndef INTERVAL_H
#define INTERVAL_H

#include <limits> // For std::numeric_limits

class interval {
public:
    double min, max;

    // Default interval is empty
    interval() : min(std::numeric_limits<double>::infinity()), max(-std::numeric_limits<double>::infinity()) {}

    // Constructor with min and max
    explicit interval(double min, double max) : min(min), max(max) {}

    // Calculate the size of the interval
    double size() const {
        return max - min;
    }

    // Check if the interval contains a value
    bool contains(double x) const {
        return min <= x && x <= max;
    }

    // Check if the interval surrounds a value
    bool surrounds(double x) const {
        return min < x && x < max;
    }

    double clamp(double x) const {
        if (x < min) return min;    
        if (x > max) return max;
        return x;
    }

    // Static instances for empty and universe intervals
    static const interval empty, universe;
};

// Define the static members
const interval interval::empty = interval(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity());
const interval interval::universe = interval(-std::numeric_limits<double>::infinity(), std::numeric_limits<double>::infinity());

#endif



