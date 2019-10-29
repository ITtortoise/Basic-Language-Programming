class student:public person
 { private: string program;
 int studyYear; 
public: void setInfo()
{ setData(); // for setting inherit data // cin>>program>>studyYear; } 
void showInfo()
{ showData(); // for showing inherit data // cout<<"Program: "<<program<<" "<<"Study_Year:"<<studyYear<<endl; }
 }; 
class teacher:public person
 { private: string designation ;
 int salary; 
public: void setInfo()
{ setData(); // for setting inherit data // cin>>designation >>salary; } void showInfo()
{ showData(); // for showing inherit data //
 cout<<"Designation : "<<designation <<" "<<"Salary:"<<salary<<endl; } };
 int main() 
{ student s1,s2; 
teacher t1,t2; 
s1.setInfo();
 s1.showInfo();
 t1.setInfo(); 
t1.showInfo(); 
return 0; }