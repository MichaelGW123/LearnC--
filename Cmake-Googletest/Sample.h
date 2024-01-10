#ifndef SAMPLE_H
#define SAMPLE_H

class Sample
{
public:
    Sample();
    ~Sample();
    void SetN(int set);
    int GetN();

private:
    int n;
};

#endif