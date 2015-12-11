class IEntry
{
    public:
        virtual void open() = 0;
        virtual void close() = 0;
        virtual int status() = 0;
};

