#ifndef LINE_H
#define LINE_H
#include "point.h"


class segment {
    point begin, end;

  public:
    segment();
    segment(const point &a, const point &b);
    vector vec() const;
    double len() const;
    bool operator & (const segment &other) const;
};


class line {
    point normal;
    double free;

  public:
    line();
    line(const point &a, const point &b);
    double dist(const point &a);

};
#endif // LINE_H
