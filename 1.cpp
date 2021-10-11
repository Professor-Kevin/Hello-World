// program to find the ones compliment of the binary number entered by the user
#include<iostream>
using namespace std;

class binary{
    string num;
    public:
    void b_num();
    void num_check();
    void num_convert();
    void num_display();
};


void binary :: b_num(){
    cout<<"Enter the binary number: ";
    cin>>num;
}

void binary :: num_check(){
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) != '1' && num.at(i) != '0'){
            cout<<"Invalid binary number. \n";
            b_num();
        }
    }   
}

void binary :: num_convert(){
    num_check();
    for (int i = 0; i < num.length(); i++)
    {
        if (num.at(i) == '1')
            num.at(i) = '0';
        else
            num.at(i) = '1'; 
    }
}

void binary :: num_display(){
    for (int j = 0; j < num.length(); j++)
        cout<<num.at(j);
}

int main(){
    binary obj;
    obj.b_num();
    obj.num_convert();
    obj.num_display();
}