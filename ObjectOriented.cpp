#include<iostream>
#include<string>
using namespace std;

class animal {
    public:
        string sound;
        int count;
    private:
        int password = 5656;
};

int main(){
    animal cow;
    cow.sound = "moo";
    cow.count = 12;
    return 0;
}