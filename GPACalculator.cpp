#include<bits/stdc++.h>
using namespace std;



double point(string grade){
    map<string,double>grades;

    grades["A+"]=4.0;grades["A"]=3.75;grades["A-"]=3.50;grades["B+"]=3.25;
    grades["B"]=3.0; grades["B-"]=2.75; grades["C+"]=2.50;
    grades["C"]=2.25; grades["D"]=2.0; grades["F"]=0.0;


    for(auto a:grades){
    if(a.first==grade)
        return a.second;
    }
    cout<<"Enter correctly your grade It should be capital letter!"<<endl;
    return -1;
}

int main(){
    string grade;
    double credits[]={3.0,0.75,3.0,1.5,3.0,1.5,3.0,3.0,0.75},totalcg,totalcredits=19.5,gpa;
    int j=0;
    while(j<40){
    totalcg=0;
    for(int i=0;i<9;i++){
    cin>>grade;
    double points=point(grade);

    totalcg+=credits[i]*points;

    }

    gpa=totalcg/totalcredits;

    cout<<"your gpa without thesis(1.5 credit) is: "<<gpa<<endl;
    j++;

    }

}
