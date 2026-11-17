#ifndef INSTRUMENTS_H
#define INSTRUMENTS_H
#include <string>

class Instrument{
    private:
        std::string name;
    public:
        Instrument(std::string name);
};

class PhasedArray: public Instrument{
    public:
        PhasedArray();
};

class Ionosonde: public Instrument{
    public:
        Ionosonde();
};

class Radar: public Instrument{
    public:
        Radar();
};

class Photometer: public Instrument{
    public:
        Photometer();
};

#endif