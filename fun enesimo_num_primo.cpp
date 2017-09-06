#include <iostream>
using namespace std;
int enepri(int no);


int main(){
    int no,resu;
    cin >> no;
    resu=enepri(no);
    cout << "el primo es" << resu << endl;
    return 0;
}

int enepri(int no){
    int np,con_no,con=1,acu_npc=0,var_tem;
    con_no=no;

    for(np=2;((con<=con_no) && (no>=con));con++,np++){
        if ((no%con)==0){
            acu_npc++;
            var_tem=np;
            //cout << "el valor de var_tem en el if" << var_tem << endl;
        }
        else {
            con_no++;

            var_tem=np;
            //cout << "el valor de var_tem en el ELSE" << var_tem << endl;
        }
    //cout << "no  " << "np  " << "con  " << "con_no  " << "acu_npc  " << "var_tem  " << endl;
    //cout << no<<"   " << np << "   " << con << "      " << con_no<< "        " << acu_npc << "           " << var_tem  << endl;

    }

    return (con+acu_npc)-1;
}
