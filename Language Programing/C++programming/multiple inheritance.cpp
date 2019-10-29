using namespace std;

/* parent class 1 */

class information
{
private:
    string name;
    int stu_id;
protected:
    void setInfo(){
        cin>>name>>stu_id;
    }
    void showInfo(){
         cout<<endl<<"Stu_Name: "<<name<<endl<<"Stu_ID: "<<stu_id<<endl;
    }
};

/* parent class 2 */

class resultMani
{
private:
    float marks;
protected:
    void setMarks(){
        cin>>marks;
    }
    void processResult(){
          if(marks>=80)
            cout<<"Marks: "<<marks<<" "<<"Merit/position: Passed"<<endl;
        else
            cout<<"Marks: "<<marks<<" "<<"Merit/position: Failed"<<endl;
    }
};

/*child class */

class student:public information,public resultMani
{
public:
    void setData(){
        setInfo();
        setMarks();
    }
    void showData(){
        showInfo();
        processResult();
    }
};

int main()
{
    student s1,s2;
    s1.setData();
    s1.showData();

    return 0;
}

