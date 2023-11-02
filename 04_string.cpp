//to use string include the header file as #include<string>
// we use it to make some functions easy to use instead of writing any code

//execution
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="Beenu";
    cout<<s1<<endl; //Beenu

    //to copy string
    string s2(s1);
    cout<<s2<<endl; //Beenu

    //to copy specific part of string
    //syntax : string string_name_in_which_u_want_to_cpy(string_you_Wanto_copy,strt_indx,end_index);
    string s3(s1,1,3); 
    cout<<s3<<endl; //een

    //substring
    string s4=s1.substr(1,3);
    cout<<s4<<endl; //een

    //to compare two strings
    //if string are not same it return 1 else it returns 0
    if(!(s1.compare(s2))){
        cout<<"Both are same"<<endl;
    }else{
        cout<<"Both are not same"<<endl;
    }

}