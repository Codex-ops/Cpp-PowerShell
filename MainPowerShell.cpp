/*Includes*/

#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <filesystem>
#include "../PowerShell/Headers/Help.h"
#include "../PowerShell/Headers/Mkhelp.h"
#include "../PowerShell/Headers/Rmhelp.h"
#include "../PowerShell/Headers/Clear.h"
#include "../PowerShell/Headers/Website.h"
#include "../PowerShell/Headers/Welcome.h"
using namespace std;


/*Main Function*/

int main(){
    string Dirname;
    string sDirertory;
    string commands;
    char command[50];
    welcome();
    website();
    cout << "Type 'help' to get help." << endl;
    cout << "" << endl;

    while (true)
    {
        cout << "PS " << get_current_dir_name() << "> ";
        cin >> commands;
        if(commands == "help"){
            clears();
            help();
        }else if(commands == "mkdir"){
            cin >> Dirname;
            mkdir(Dirname.c_str(), 0777);
        }else if(commands == "mkhelp"){
            MkdirHelp();
        }else if(commands == "rmdir"){
            cin >> Dirname;
            rmdir(Dirname.c_str());
        }else if(commands == "rmhelp"){
            RmdirHelp();
        }else if(commands == "Set-Location"){
            cin >> sDirertory;
            cin.get();
            chdir(sDirertory.c_str());
        }else if(commands == "cls"){
            clears();
        }else if(commands == "exit"){
            exit(0);
        }else if(commands == "ls" || "dir"){
            system(commands.c_str());
        }
    }
    return 0;
}