#include <iostream>
using namespace std;

int fun_enesimo_np(int no);

int main()
{
    int no,resu2;

    cin >> no;
    resu2=fun_enesimo_np(no);


    cout << " el primo 10001 es " << resu2 << endl;
}

int fun_enesimo_np(int no){
    int np=2,npe,resu;
    while(no>0){
        npe=1;
        for(int i=2;i<np;i++){
            if(np%i==0){
                npe=0;
                break;
            }
        }
        if(npe)
            no--;
        np++;
    }
    return resu=np-1;

}
