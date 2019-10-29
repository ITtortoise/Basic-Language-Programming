#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[200];
    int sid;
};
int main()
{
    struct student a,b;
    strcpy(a.name,"shohag");
    a.sid=16030;
    ofstream fout;
    fout.open("info.txt");
    if(!fout)
        cout<<"file cant open";
    else{
        fout.write((char*)&a,sizeof(struct student));
        fout.close();
    }
    ifstream fin;
    fin.open("info.txt");
    if(!fout)
        cout<<"file cant open";
    else{
        fin.read((char*)&b,sizeof(struct student));
        f in.close();
        cout<<"name:"<<b.name<<" "<<"id:"<<b.sid<<endl;
    }
    return 0;
}
