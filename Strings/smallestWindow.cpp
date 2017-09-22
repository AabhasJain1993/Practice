#include<iostream>
#include<string>

using namespace std;

char* removeDuplicates(char *str) {
    int j = 0,i=0;
    for(j=1; str[j]!='\0'; j++) {
        while(str[i]==str[j] && str[j]!='\0') {
            j++;
        }
       // cout<<str[j]<<" ";
        str[++i] = str[j];
    }
    str[i]='\0';
    //cout<<"value of i : " << i<<endl;
    //cout<<str<<endl;
    return str;

}

int main() {
    
    char str[] = "aaaabbbcdddd";
    //str1[2]='\0';
    //cout<<str1;
    str = removeDuplicates(str);
    cout<<str<<endl;
    


return 0;
}
