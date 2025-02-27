#include<iostream>
using namespace std;

class student{
    public:
    string name;
    float mark;

    void input(){
        cout<<" name :";
        cin>>name;
        cout<<"Marks :";
        cin>>mark;
    }
     
    void display(){
        cout<<name<<" with --- "<<mark<<" marks"<<endl;
    }

};
main(){
    student s[5];

    //calling input function for 5 times to get 5 different inputs :)
    for(int i=0;i<5;i++){
        cout<<"Enter the "<<i+1<<" student";
        s[i].input();
    }

    //create onother object topper and set its value to 0th index of the student array :) 
    student topper = s[0];

    for(int i=1;i<5;i++){
    if(s[i].mark > topper.mark){
        topper=s[i];
    }  
    }

    cout<<endl<<"The topper of the class is : "<<endl;
    topper.display();

    return 0;
}

//Ye bhi koi program hui :)
