#include<iostream>
#include<string>

using namespace std;

int main(){
    int age;
    double height,property;
    string status;

    cout << "Enter your age: ";
    cin >> age;

    if(0 <=age <= 20){
        cout << "Enter your height: ";
        cin >> height;

        if(height < 160){
            status = "UNFRIEND";
        }else if(height < 175){
            status = "FRIEND";
        }else{
            cout << "Enter your property: ";
            cin >> property;

            if(property > 69000000){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT-STAND";
            }
        }
    }else if(age <= 30){
        cout << "Enter your property: ";
        cin >> property;
        if(property > 10000000){
            status = "BEST FRIEND";
        }else{
            status = "UNFRIEND";
        }
    }else{
        status = "UNFRIEND";
    }

    cout << "Your status = "<<status;

}
