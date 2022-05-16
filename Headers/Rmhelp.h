using namespace std;

void Rmhelp() {
    cout << "Usage: /usr/bin/rmdir [OPTION]... DIRECTORY..." << endl;
    cout << "Remove the DIRECTORY(ies), if they are empty." << endl;
    cout << "" << endl
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