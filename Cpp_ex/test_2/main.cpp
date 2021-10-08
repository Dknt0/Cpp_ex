#include <iostream>
#include <string>
#include "wk_public.h"
#include "worker_Manager.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    setlocale(LC_ALL, "");

    Show_Menu();
    cout << "请选择" << endl;
    unsigned key;

    while(true){
        cin >> key;
        switch (key)
        {
        case (0):   // 退出系统
            exitSystem();
            break;
        case (1):   // 增加职工
            break;
        case (2):   // 显示职工
            break;
        case (3):   // 删除职工
            break;
        case (4):   // 修改职工
            break;
        case (5):   // 查找职工
            break;
        case (6):   // 职工排序
            break;
        case (7):   // 清空文档
            break;

        default:
            system("clear");
            Show_Menu();
            cout << "输入有误，请重新输入。" << endl;
            break;
        }
    }
    return 0;
}