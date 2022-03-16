#include<iostream>
#include<string>
using namespace std;
bool bracketCheck(string test){
    int temp1=0,temp2=0;
    for(int i=0;i<test.size();i++){
        if(test[i]=='('){
            temp1++;
        }
        if(test[i]==')'){
            temp1--;
            if(temp1<0){
                //cout<<"( missing"<<endl;
                temp2++;
                break;
            }
        }
    }
    if(temp2==0){
    if(temp1>0){
        //cout<<") missing"<<endl;
        return false;
    }
    else if(temp1<0){
        //cout<<"( missing"<<endl;
        return false;
    }
    else{
        //cout<<"valid"<<endl;
       return true;
    }
    }
    else
        return false;
}

bool isOperator(string test){
    int temp=0;
    for(int i=0;i<test.size();i++){
        if(test[i]=='+'||test[i]=='-'||test[i]=='*'||test[i]=='/'){
                if(i+1<test.size() && (test[i+1]=='+' || test[i+1]=='-' || test[i+1]=='*' || test[i+1]=='/'))
                    temp++;
        }
    }
    if(temp>0)
        return false;
    else
        return true;
}

bool isOperand(string test){
    int temp=0;
    return true;
}

int main(){
    string test;
     cin>>test;
    if(bracketCheck(test)){
        cout<<"Bracket Check: valid"<<endl;
    }
    else{
        cout<<"Bracket Check: invalid"<<endl;
    }
    if(isOperator(test)){
        cout<<"Operator check: valid"<<endl;
    }
    else{
        cout<<"Operator check: invalid"<<endl;
    }

}

