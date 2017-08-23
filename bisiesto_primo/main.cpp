#include <iostream>
using namespace std;
int main(){
    int anobi;

    cin>>anobi;
    if(anobi % 4 == 0 && (anobi % 100 != 0 || anobi % 400 == 0))
        cout<<" Si es bisiesto ";
    else
        cout<<"No es bisiesto " << endl;

    cout << endl;
    cout << endl;
    cout << endl;


    int acu=0,i,numpri;

    cin>>numpri;
    for(i=1;i<(numpri+1);i++){
        if(numpri%i==0){
             acu++;
        }
    }
    if(acu!=2){
        cout<<" no Primo";
    }else{
        cout<<" Primo";
    }
    return 0;
}
