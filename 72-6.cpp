#include <bits/stdc++.h>

using namespace std;
void replaceD(string &str){
    int i = 0;
    while(i < str.length()){
        if (str[i] == ',')
            str[i] = ' ';
        i++;
    }
}
long double F(int m,int n)
{
    if (n == 1|| m == n)
        return 1;
    else if (n == 0)
        return 0;
    return F(m - 1,n - 1) + n * F(m - 1,n);
}
int main()
{
    int N,m,n;
    long long sum = 0;
    string str;
    getline(cin,str);
    replaceD(str);
    stringstream ss(str);
    ss >> m >> n;
    sum = F(m,n);
    cout << fixed << setprecision(0) << sum << endl;
    return 0;
}
