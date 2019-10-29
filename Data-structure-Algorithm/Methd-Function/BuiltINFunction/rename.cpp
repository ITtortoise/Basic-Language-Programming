//Example requires example.txt to be in working directory
//Example renames example.txt to newname.txt
#include <cstdio>
int main()
{
    rename("example.txt", "newname.txt");
}
