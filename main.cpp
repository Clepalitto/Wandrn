#include <iostream>

using namespace std;

double dayPrice(int days){
    int dP = 52; // 4 times 3euros for meals + 40 for camping
    int full = (days*dP)+200; // + 200 for material
    return full/days;
}

int main()
{
    cout << " " << endl;
    cout << "                    ///" << endl;
    cout << " \\\\                ///" << endl;
    cout << "  \\\\              ///" << endl;
    cout << "   \\\\    //\\\\    ///" << endl;
    cout << "    \\\\  //  \\\\  ///" << endl;
    cout << "     \\\\//    \\\\///" << endl;
    cout << " " << endl;
    cout << "Wandrn - Your trek planner !" << endl;
    cout << "" << endl;

    cout << "Trek level (how many hours do you walk a day) " ;
    double level;
    cin >> level;


    double d;
    cout << "How long is your trip ? (in km) (and think of the way back) " ;
    cin>>d;
    double speed;
    cout << "How fast are you ? (in km/h) " ;
    cin>>speed;
    double time = d/speed;
    cout << "" << endl;
    if(time > 24){
        time /= 24;
        int tima = time*(24/level);
        double proday = dayPrice(tima);
        cout << "Trip length (non stop) : " << time << " days" << endl;
        cout << "Trip length (" << level << "h/day): " << tima << " days" << endl;
        cout << "Price (/day) : " << proday << " euros" << endl;
        cout << "Price (global) : " << proday*tima << " euros" << endl;
    }
    if(time < 1){
        time *= 60;
        cout << "Trip length : " << time << " minutes" << endl;
    }
    time = d/speed;
    if(time>=1 & time<24){
        int time_hours = d/speed;
        double time_full = d/speed;
        double minutes_decimal = time_full-time_hours;
        double minutes = minutes_decimal*60;
        cout << "Trip length : " << time_hours << " hours " << minutes << " minutes." << endl;
        if(time>4){
            int timb = d/speed;
            int meals = timb/4;
            cout << "Don't forget to bring " << meals << " meals." << endl;
        }
    }

    return 0;
}
