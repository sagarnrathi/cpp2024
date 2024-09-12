#include "IDate.hpp"

#pragma comment(lib,"Date.lib")

int main(void){
    IDate * pIdate = IDate :: get_instance(1,1,1970);
    pIdate->show();
    pIdate->set_day(15);
    pIdate->show();
    IDate:: release_instance(pIdate);
    pIdate = 0;
    return 0;
}