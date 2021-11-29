#ifndef A_P_EX_03_RESISTORINTERFACEEXAMPLE_H
#define A_P_EX_03_RESISTORINTERFACEEXAMPLE_H

#include <vector>

class ResistorInterface {
public:
    virtual double getResistance() = 0;

    virtual long getResistorCount() = 0;
};

class SingelResistor : public ResistorInterface {
public:
    explicit SingelResistor(double resistance);
    double getResistance() override {return resistance;}
    long getResistorCount() override {return 1;}

private:
    double resistance;
};

class MultipleResistors : public ResistorInterface {
public:
    explicit MultipleResistors(std::vector<SingelResistor> resistors);
    double getResistance() override;
    long getResistorCount() override;

private:
    std::vector<SingelResistor> resistors;
};


#endif //A_P_EX_03_RESISTORINTERFACEEXAMPLE_H
