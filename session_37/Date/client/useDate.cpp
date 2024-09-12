#include "IDate.hpp"

#pragma comment(lib,"Date.lib")

int main(void){
    IDate * pIdate = IDate :: get_instance(11,8,2023);
    pIdate -> show();
    pIdate -> set_day(15);
    pIdate->show();
    pIdate = 0 ;

    return 0;
}