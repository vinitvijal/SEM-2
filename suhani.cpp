#include <iostream>
#include <string>
using namespace std;

void Address(){
    string a;
    cout<<"enter string"<<endl;
    cin>>a;
    for(int i=0;i<a.length();i++){
        cout<<"address of"<< &(a[i]) <<"is"<<i<<endl; 
    }
}

void concatenate(){
    string c;
    string b;
    cout<<"enter 1st string"<<endl;
    cin>>c;
    cout<<"enter 2nd string"<<endl;
    cin>>b;
    cout<<(string)c+" "+b<<endl;
    
    
}
void length(){
    string d;
    int leng=0;
    cout<<"enter string"<<endl;
    cin>>d;
    for(int j=0;j<d.length();j++){
        leng++;
        
    }
    cout<<"length of string is "<<leng<<endl;
}

void upper(){
    string e;
    string str1;
    string str2;
    str1="abcdefghijklmnopqrstuvwxyz";
    str2="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<"enter string"<<endl;
    cin>>e;
    for(int i=0;i<e.length();i++){
        for(int j=0;j<str1.length();j++){
            if (e[i]==str1[j]){
                e[i]=str2[j];
            }
        }
     
    }
    
    cout<<"capitalized string is"<<e<<endl;    
    
    
    }
void reverse(){
    string str4;
    string str3=" ";
    cout<<"enter string"<<endl;
    cin>>str4;
    for(int i=str4.length();i>-1;i--){
        str3.push_back(str4[i]);
        
    }
    cout<<"reversed string is"<<str3<<endl;
}  

void insert(){
    string f;
    string g;
    int h;
    string u;
    cout<<"enter string"<<endl;
    cin>>f;
    cout<<"enter the string to be inserted"<<endl;
    cin>>g;
    cout<<"enter the index of insertion"<<endl;
    cin>>h;
    for(int i=0;i<h;i++){
        u.push_back(f[i]);
        }
    for(int j=0;j<g.length();j++){
        u.push_back(g[j]);
    }    
        
        
    
    for(int k=h;k<f.length();k++){
        u.push_back(f[k]);
    }
    cout<<"morphed string is"<<" "<<u<<endl;
    
}

    

int main() {

    int x;
    cout<<"enter 1 to find adress"<<endl;
    cout<<"enter 2 to concatenate"<<endl;
    cout<<"enter 3 to find length"<<endl;
    cout<<"enter 4 to convert to uppercase"<<endl;
    cout<<"enter 5 to reverse the string"<<endl;
    cout<<"enter 6 to execute insertion"<<endl;
    cin>>x;

    switch(x){
    case 1:
    if(x==1){  
        Address();
        break;
    }
    
    case 2:
    if (x==2){
        concatenate();   
        break;
    }
    
    case 3:
    if(x==3){
        length();
        break;
    }
    case 4:
    if(x==4){
        upper();
        break;
    }
    case 5:
    if(x==5){
        reverse();
        break;
    
    case 6:
    if(x==6){
        insert();
        break;
    }
    }
    
    
return 0;
}
}