#ifndef ROTATIONMOTOR_H
#define ROTATIONMOTOR_H


class RotationMotor
{
public:
    RotationMotor();
    int getRPM();
    void setRPM(int x);
    void incRPM();
    void decRPM();
    void start();
    void restart();
    void shutdown();
    bool getON();
private:
    int RPM;
    bool isOn;
    static const int MAXRPM = 3000;
    static const int MINRPM = -3000;
    static const int INCVAL = 100;
    static const int DECVAL = 100;
};

#endif // ROTATIONMOTOR_H
