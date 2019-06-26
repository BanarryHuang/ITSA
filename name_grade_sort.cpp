#include <bits/stdc++.h>
using namespace std;
#define MAX_LEN 200
int cmp( const void *a , const void *b );

struct person{
    char name[MAX_LEN];
    int grade;
};

typedef struct person P;

int main()
{
    int T,i=0,j,ret;
    char a;
    P group[MAX_LEN],temp;

    cin >> T;

    for(i=0;i<T;i++){
        cin >> group[i].name >> group[i].grade;
    }

    qsort(group,T,sizeof(group[0]),cmp);

    for(i=0;i<T;i++)
        cout << i+1 << ' ' << group[i].name << ' ' << group[i].grade << endl;

    return 0;
}
int cmp( const void *a , const void *b )
{
    P *c = (P *)a;
    P *d = (P *)b;
    if(c->grade != d->grade)
        return d->grade - c->grade;
    return strcmp( c->name , d->name );
}
