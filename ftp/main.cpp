/*this is my first git project FTP */

#include <iostream>
#include "door.h"
using namespace std;

int main()
{
    CDoor zFtpDoor; 
    zFtpDoor.open();
    if(1 != zFtpDoor.status()) 
    {
        return 0;
    }
    cout << "beautiful world!" << endl;
    zFtpDoor.close();
    return 0;
}


