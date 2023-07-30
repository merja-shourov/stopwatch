#include<iostream>
#include<unistd.h>
using namespace std;

void displayTime(int sec, int min, int hour){
    system("clear");
    cout << sec << " : " << min << " : " << hour << endl;
}

int main(){
    int sec = 0;
    int min = 0;
    int hour = 0;
    
    while(true){
        sleep(1);
        sec++;
        if( sec > 59 ){
            min++;
            sec = 0;
        }
        if( min > 59 ){
            hour++;
            min = 0;
            sec = 0;
        }
        displayTime(sec, min, hour);
    }
    return 0;
}