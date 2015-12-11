#include <iostream>
#include "door.h"
using namespace std;
CDoor::CDoor()
{
}

CDoor::~CDoor()
{
}

void CDoor::open()
{
    cout << "zZ...Welcome!\n";
    m_enStatus = 1;
}

void CDoor::close()
{
    cout << "zZ...GoodBye~\n";
    m_enStatus = 0;
}

int CDoor::status()
{
    return m_enStatus;
}
