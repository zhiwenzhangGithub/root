/**/
#include "entry.h"
class CDoor : public IEntry
{
    public:
        CDoor();
        virtual ~CDoor();

    public:
        void open();
        void close();
        int status();

    private:
        int m_enStatus;
};


