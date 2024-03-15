#include <iostream>
using namespace std;
class Cricketer{  
public:
    string name;
    int age;
    void input_info(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
};

class Batsman : public Cricketer{
public:
    int total_runs;
    double average_runs;
    int best_performance;
    void input_data(){
        input_info();
        cout<<"Enter total runs: ";
        cin>>total_runs;
        cout<<"Enter best performance: ";
        cin>>best_performance;
        calculate_average_runs();
    }

    void calculate_average_runs(){
        if (total_runs != 0){
            average_runs = static_cast<double>(total_runs) / 5;
        }
    }

    void display_data(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Total Runs : "<<total_runs<<endl;
        cout<<"Average Runs : "<<average_runs<<endl;
        cout<<"Best Performance : "<<best_performance<<endl;
    }
};

int main() {
    Batsman batsman;
    cout<<"Enter Batsman's Details"<< endl;
    batsman.input_data();

    cout<<"Batsman's Data"<<endl;
    batsman.display_data();
    return 0;
}