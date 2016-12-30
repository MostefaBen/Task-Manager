#include <cstdlib>
#include <iostream>

using namespace std;

void main() {
    
	system("COLOR 9");
	cout << endl << "1 :  Activate the task manager" << endl
         << endl << "2 :  Disable the task manager " << endl
		 << endl << "3 :  Exit." << endl;
		 
	cout << endl << "Put your choice : " << endl;
	char c;	 
	cin >> c;        
    system("cls");
	
	switch (c) {
	
        case '1':system("REG ADD hkcu\\Software\\Microsoft\\Windows\\CurrentVersion"
                        "\\policies\\system /v DisableRegistryTools /t reg_dword /d 0");
            break;
			
        case '2':system("REG ADD hkcu\\Software\\Microsoft\\Windows\\CurrentVersion"
                        "\\policies\\system /v DisableTaklMgr /t reg_dword /d 1");
            break;
			
	    case '3':system("EXIT");
            break;	
			
        default:cout << "Error, choose again" << endl;
    }
    
}
