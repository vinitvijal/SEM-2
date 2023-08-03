// Define a class batsman with the following specifications:
// Private members:
// bcode 4 digits code number
// bname 20 characters
// innings, notout, runs integer type
// batavg it is calculated according to the formula –
// batavg =runs/(innings-notout)
// calcavg() Function to compute batavg
// Public members:
// readdata() Function to accept value from bcode, name, innings, notout and invoke the function calcavg()
// displaydata() Function to display the data members on the screen

#include "iostream"
using namespace std;


class batsman{
    private:
    char bcode[4];
    char bname[20];
    int innings;
    int notout;
    int runs;
    float batavg;
    void calcavg(){
        batavg=runs/(innings-notout);
    }
    public:

    void readdata(){
        cout<<"enter bcode"<<endl;
        cin>>bcode;
        cout<<"enter bname"<<endl;
        cin>>bname;
        cout<<"enter innings"<<endl;
        cin>>innings;
        cout<<"enter notout"<<endl;
        cin>>notout;
        cout<<"enter runs"<<endl;
        cin>>runs;
        calcavg();
    }
    void displaydata(){
        cout<<"bcode is"<<bcode<<endl;
        cout<<"bname is"<<bname<<endl;
        cout<<"innings is"<<innings<<endl;
        cout<<"notout is"<<notout<<endl;
        cout<<"runs is"<<runs<<endl;
        cout<<"batavg is"<<batavg<<endl;
    }
};

int main(){
    batsman dhoni;
    dhoni.readdata();
    dhoni.displaydata();
    return 0;
}