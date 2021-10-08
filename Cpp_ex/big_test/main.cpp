#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Public.h"
#include "Person.h"
#include "MailList.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

int main(){
    setlocale(LC_ALL, "");
    showMenu();

    MailList Mlist;

    // Mlist.addPerson();
    // Mlist.addPerson();
    // Mlist.showPerson();
    // Mlist.modifyPerson();
    // Mlist.showPerson();

    int select;

    while (true)
    {
        
        cin >> select;
        if(!cin){

            try{
                // cin.ignore();
                cin.clear();
                cin.ignore();
                int test{1};
                cin >> test;
                if(test) throw std::runtime_error("This is an Error, cin don't work");
                cout << select << "cin is reworking" << endl;;
                continue;
            }catch(std::runtime_error err){
                std::cerr << err.what() << endl;
            }
            
        }
        switch (select)
        {
        case 1:
            Mlist.addPerson();
            break;
        case 2:
            Mlist.showPerson();
            break;
        case 3:
            Mlist.deletePerson();
            break;
        case 4:
            Mlist.findPerson();
            break;
        case 5:
            Mlist.modifyPerson();
            break;
        case 6:
            Mlist.cleanPerson();
            break;
        // case 0:
        //     cout << "退出系统" << endl;
        //     stars();
        //     return 0;
        //     break;
        default:
            showMenu();
            break;
        }
    }
    
    // system("ls -a");
    return 0;
}