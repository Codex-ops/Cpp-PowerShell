using namespace std;

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