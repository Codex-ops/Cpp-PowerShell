using namespace std;

void commandhelp(){
    cout << "Help commands" << endl;
    cout << "-------------" << endl;
    cout << "" << endl;
    cout << "help - shows help menu." << endl;
    cout << "Make-Item--help - shows make-item help." << endl;
    cout << "Remove-Item--help - shows remove-item help." << endl;
    cout << "" << endl;
    cout << "Main commands" << endl;
    cout << "-------------" << endl;
    cout << "" << endl;
    cout << "Set-Location - changes to specified directory." << endl;
    cout << "Clear-Host - clears screen" << endl;
    cout << "Get-Location - shows current working directory" << endl;
    cout << "ls/dir - shows files in current directory." << endl;
    cout << "exit - exits powershell" << endl;
    cout << "" << endl;
    cout << "Create-File - makes file." << endl;
    cout << "Make-Item - makes directory." << endl;
    cout << "Make-Item--verbose - shows making directory" << endl;
    cout << "Make-Item--version - shows version." << endl;
    cout << "" << endl;
    cout << "Remove-Item - removes directory." << endl;
    cout << "Remove-Item--verbose - shows removing directory." << endl;
    cout << "Remove-Item--version - shows version." << endl; 
}

void welcome(){
    cout << "PowerShell " << __VERSION__"(Beta)" << endl;
    cout << "Copyright (c) Microsoft Corporation." << endl;
    cout << "" << endl;
}

void website()
{
    cout << "https://aka.ms/powershell" << endl;
}

void Rmhelp() {
    cout << "Usage: /usr/bin/rmdir [OPTION]... DIRECTORY..." << endl;
    cout << "Remove the DIRECTORY(ies), if they are empty." << endl;
    cout << "" << endl;
    cout << "       --ignore-fail-on-non-empty" << endl;
    cout << "                   ignore each failure that is solely because a directory" << endl;
    cout << "                       is non-empty" << endl;
    cout << "   -p, --parents   remove DIRECTORY and its ancestors; e.g., 'rmdir -p a/b/c' is" << endl;
    cout << "                       similar to 'rmdir a/b/c a/b a'" << endl;
    cout << "   -v, --verbose    output a diagnostic for every directory processed" << endl;
    cout << "       --help      displays this help and exit" << endl;
    cout << "       --version   output version information and exit" << endl;
    cout << "" << endl;
    cout << "GNU coreutils online help: <https://www.gnu.org/software/coreutils/>" << endl;
    cout << "Full documentation at: <https://www.gnu.org/software/coreutils/rmdir>" << endl;
    cout << "or available locally via: info '(coreutils) rmdir invocation'" << endl;
}

void MkdirHelp() {
    cout << "Usage: /usr/bin/mkdir [OPTION]... DIRECTORY..." << endl;
    cout << "Create the DIRECTORY(ies), if they do not already exist." << endl;
    cout << "" << endl;
    cout << "Mandatory arguments to long options are mandatory for short options too." << endl;
    cout << " -m, --mode=MODE   set file mode (as in chmod), not a=rwx - umask" << endl;
    cout << " -p, --parents     no error if existing, make parent directories as needed" << endl;
    cout << " -v, --verbose     print a message for each created directory" << endl;
    cout << " -Z                    set SELinux security context of each created directory" << endl;
    cout << "                           to the defualt type" << endl;
    cout << "     --context[=CTX]   like -Z, or if CTX is specified then set the SELinux" << endl;
    cout << "                           or SMACK security context to CTX" << endl;
    cout << "     --help         displays this and exit" << endl;
    cout << "     --version      output version information and exit" << endl;
    cout << "" << endl;
    cout << "GNU coreutils online help: <https://www.gnu.org/software/coreutils/>" << endl;
    cout << "Full documentation at: <https://www.gnu.org/software/coreutils/mkdir>" << endl;
    cout << "or available locally via: info '(coreutils) mkdir invocation'" << endl;
}

void clears()
{
    cout << "\x1B[2J\x1B[H";
}

void mkdirversion() {
    cout << "mkdir (GNU coreutils) 8.30 " << endl;
    cout << "Copyroght (C) 2018 Free Software Foundation, Inc." << endl;
    cout << "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>."<< endl;
    cout << "This is free software: you are free to change and redistribute it." << endl;
    cout << "There is NO WARRANTY, to the extent permitted by law." << endl;
    cout << "" << endl;
    cout << "Written by David MacKenzie." << endl;
}

void rmdirversion() {
    cout << "rmdir (GNU coreutils) 8.30 " << endl;
    cout << "Copyroght (C) 2018 Free Software Foundation, Inc." << endl;
    cout << "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>."<< endl;
    cout << "This is free software: you are free to change and redistribute it." << endl;
    cout << "There is NO WARRANTY, to the extent permitted by law." << endl;
    cout << "" << endl;
    cout << "Written by David MacKenzie." << endl;
}

void help()
{
            cout << "TOPIC" << endl;
            cout << "   PowerShell Help System" << endl;
            cout << "" << endl;
            cout << "SHORT DESCRIPTION" << endl;
            cout << "   Displays help about PowerShell cmdlets and concepts." << endl;
            cout << "" << endl;
            cout << "LONG DESCRIPTION" << endl;
            cout << "   PowerShell Help describes PowerShell cmdlets, functions, scripts, and" << endl;
            cout << "   modules, and explains concepts, including the elements of the PowerShell" << endl;
            cout << "   language." << endl;
            cout << "" << endl;
            cout << "   PowerShell does not include help files, but you can read the help topics" << endl;
            cout << "   online, or use the Update-Help cmdlet to download help files to your" << endl;
            cout << "   computer and then use the Get-Help cmdlet to display the help topics at" << endl;
            cout << "   the command line." << endl;
            cout << "" << endl;
            cout << "   You can also use the Update-Help cmdlet to download updated help files" << endl;
            cout << "   as they are released so that your local help content is never obsolete." << endl;
            cout << "" << endl;
            cout << "   Without help files, Get-Help displays auto-generated help for cmdlets," << endl;
            cout << "   functions, and scripts." << endl;
            cout << "" << endl;
            cout << " ONLINE HELP" << endl;
            cout << "   You can find help for PowerShell onlie at" << endl;
            cout << "   https://go.microsoft.com/fwlink.?LinkID=108518." << endl; 
            cout << "" << endl;
            cout << "   To open online help for any cmdlets or function, type:" << endl;
            cout << "" << endl;
            cout << "       Get-Help <cmdlet-name> -Online" << endl;
            cout << " UPDATE-HELP" << endl;
            cout << "   To download and install help files on your computer:" << endl;
            cout << "" << endl;
            cout << "       1. Start PowerShell with the 'Run as administrator' option." << endl;
            cout << "       2. Type:" << endl;
            cout << "" << endl;
            cout << "           Update-Help" << endl;
            cout << "" << endl;
            cout << "   After the help files are installed, you can use the Get-Help cmdlet to" << endl;
            cout << "   display the help topics. You can also use the Update-Help cmdlet to" << endl;
            cout << "   download updated help files so that your local help files are always" << endl;
            cout << "   up-to-date." << endl;
            cout << "" << endl;
            cout << "   For more information about the Update-Help cmdlet, type:" << endl;
            cout << "" << endl;
            cout << "       Get-Help Update-Help -Online" << endl;
            cout << "" << endl;
            cout << "   or go to: https://go.microsoft.com/fwlink/?LinkID=210614" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << " GET-HELP" << endl;
            cout << "   The Get-Help cmdlet displays help at the command line from content in" << endl;
            cout << "   help files on your computer. Without help files, Get-Help displaya basic" << endl;
            cout << "   help about cmdlets and functions. You can also use Get-Help to display" << endl;
            cout << "   online help for cmdlets and functions.";
            cout << "" << endl;
            cout << "   To get help for a cmdlet, type:" << endl;
            cout << "" << endl;
            cout << "       Get-Help <cmdlet-name>" << endl;
            cout << "" << endl;
            cout << "   To get online help, type:" << endl;
            cout << "" << endl;
            cout << "       Get-Help <cmdlet-name> -Online" << endl;
            cout << "   The titles of conceptual topics begin with 'About_'. To get help for a" << endl;
            cout << "   concept or language element, type:" << endl;
            cout << "" << endl;
            cout << "       Get-Help About_<topic-name>" << endl;
            cout << "" << endl;
            cout << "   To search for a word or phrase in all help files, type:" << endl;
            cout << "" << endl;
            cout << "       Get-Help <search-term>" << endl;
            cout << "" << endl;
            cout << "   For more information about the Get-Help cmdlet, type:" << endl;
            cout << "" << endl;
            cout << "       Get-Help Get-Help -Online" << endl;
            cout << "" << endl;
            cout << "   or got to: https://go.microsoft.com/fwlink/?LinkID=113316" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << " EXAMPLES:" << endl;
            cout << "   Save-Help          : Download help files from the internet and save" << endl;
            cout << "                        them on a file share." << endl;
            cout << ""  << endl;
            cout << "   Update-Help        : Downloads and installs help files from the" << endl;
            cout << "                        internet or a file share." << endl;
            cout << "" << endl;
            cout << "   Get-Help Get-Process : Displays help about the Get-Process cmdlet." << endl; 
            cout << "" << endl;
            cout << "   Get-Help Get-Process -Online" << endl;
            cout << "                           : Opens online help for the Get-Process cmdlet." << endl;
            cout << "" << endl;
            cout << "   Help Get-Process        : Displays help about Get-Process one page at a" << endl;
            cout << "                             time." << endl;
            cout << "   Get-Process -?          : Displays help about the Get-Process cmdlet." << endl;
            cout << "" << endl;
            cout << "   Get-Help About_Modules  : Displays help about PowerShell modules." << endl;
            cout << "" << endl;
            cout << "   Get-Help remoting       : Searches the help topics for the word 'remoting.'" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << " SEE ALSO:" << endl;
            cout << "   about_Updateable_Help" << endl;
            cout << "   Get-Help" << endl;
            cout << "   Save-Help" << endl;
            cout << "   Update-Help" << endl;
}
