#include <iostream>
#include <cartvec2d.h>
#include <dofxyrz.h>
#include <fstream>

using namespace std;

int main()
{
    // Avoid the usage of #define
    const double PI{3.14159265358979323846};
    const double DELTA_t_sec{0.1};
    const double MAX_t_sec{10.0};
    double velocity{0.2}; // m/sec
    double angular_velocity{0.25 * PI};
    double t_sec = 0.0;
    // rad/sec
    DOFxyRz roomba;
    ofstream myfile;
    //myfile.open ("/home/student/SEexercises/assignment8/log.csv");
    double speed = angular_velocity * DELTA_t_sec;
    // Simulation loop
    while (t_sec <= MAX_t_sec)
    {
        cout << "t = " << t_sec << "  " << roomba << endl;
        // Calculate rotation every simulation step

        roomba += speed;
        // Calculate translation every simulation step
        CartVec2D delta_heading(roomba.heading() * velocity * DELTA_t_sec);

        myfile.open ("/home/student/SEexercises/assignment8/log.csv");
        myfile << t_sec << "," << roomba.vect.getCartVec2Dx() << "," << roomba.vect.getCartVec2Dy() << endl;
        myfile.close();

        roomba += delta_heading;

        t_sec += DELTA_t_sec;

    }
    //myfile.close();
    return 0;
}

