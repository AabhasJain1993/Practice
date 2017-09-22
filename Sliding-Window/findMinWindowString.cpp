#include<bits/stdc++.h>

using namespace std;

/* Find the smallest window in a string containing all characters of another string*/

int shouldFind[256] = {0};
int hasFind[256] = {0};

void findSubString(string str, string pat) {
    int count = 0;
    int j=0;
    int start=-1, finish=-1;
    int minWindow = 99999999;
    
    for(int i=0;i<256;i++) {
        shouldFind[i] = hasFind[i] = 0;
    }
    for(int i=0; i < pat.length(); i++) {
        shouldFind[pat[i]] +=1;
    }
    
    for(int i=0; i< str.length(); i++) {
        if(shouldFind[str[i]] == 0) {
            continue;
        }
        hasFind[str[i]] += 1;
        
        //For not allowing to increase count if faaltu (not required)characters are present
        if(shouldFind[str[i]] >= hasFind[str[i]]) {
            count +=1;
        }
        
        if(count == pat.length()){
        cout<<"count === len";
            //When we are increasing j 
            //Checking whether hasFind > shouldFind  OR shouldFind [j] is zero means it is on characters which
            //not in Pattern
            while(shouldFind[str[j]]==0 || hasFind[str[j]] > shouldFind[str[j]]) {
                if(hasFind[str[j]] > shouldFind[str[j]]) {
                    hasFind[str[j]]--;
                }
                j++;

            }
            
            if(minWindow > (i- j + 1) ) {
                minWindow = i- j + 1;
                start = j;
                finish = i;
            }
        
        }
        
    } 
    cout<<endl;
    cout<<"start : " << start<<" Finish : "<<finish<<endl;
}

int main()
{
    //string str = "ABCDABBADAABCDEF";
    //string pat = "AAB";
 
	string str = "AACAACAACAACAACAA";
	string pat = "AAB";

    findSubString(str, pat);
    return 0;
}
