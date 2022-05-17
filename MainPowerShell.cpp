/*Includes*/

#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <filesystem>
#include "../PowerShell/Headers/help.h" 
using namespace std;


/*Main Function*/

int main(){
    string Filename;
    fstream File;
    string Dirname;
    string sDirertory;
    string commands;
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
        }else if(commands == "Get-Help"){
            commandhelp();
        }else if(commands == "Set-Location"){
            cin >> sDirertory;
            cin.get();
            chdir(sDirertory.c_str());
        }else if(commands == "Create-File"){
            cin >> Filename;
            File.open(Filename,ios::out);
            File.close();
        }else if(commands == "Make-Item"){
            cin >> Dirname;
            mkdir(Dirname.c_str(), 0777);
        }else if(commands == "Make-Item--verbose"){
            cin >> Dirname;
            cout << "/usr/bin/mkdir: created directory " << Dirname << endl;
            mkdir(Dirname.c_str(), 0777);
        }else if(commands == "Make-Item--help"){
            MkdirHelp();
        }else if(commands == "Make-Item--version"){
            mkdirversion();
        }else if(commands == "Remove-Item"){
            cin >> Dirname;
            rmdir(Dirname.c_str());
        }else if(commands == "Remove-Item--verbose"){
            cin >> Dirname;
            cout << "/usr/bin/mkdir: deleted directory " << Dirname << endl;
            mkdir(Dirname.c_str(), 0777);
        }else if(commands == "Remove-Item--help"){
            Rmhelp();
        }else if(commands == "Remove-Item--version"){
            rmdirversion();
        }else if(commands == "Get-Location"){
            cout << "Current working directory " << get_current_dir_name() << endl;
        }else if(commands == "Clear-Host"){
            clears();
        }else if(commands == "ls" || "dir"){
            system(commands.c_str());
        }else if(commands == "exit"){
            exit(0);
        }
    }
    return 0;
}
