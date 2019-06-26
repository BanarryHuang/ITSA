#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x1,x2;
    int i,count;

    while(!cin.eof()){
        cin >> x1 >> x2;
    	char str[8]={0};
    	count=0;
    	cin >> str;
    	for(i=0;i<7;i++){
        	if(str[i]==x1&&str[i+1]==x2)
        		count++;
    	}
    	cout << count << endl;
    }

    return 0;
}

