// p105.cpp Public and Private Inheritance

class A
{
    private:
        int privdatA;
    protected:
        int protdatA;
    public:
        int publdatA;
};

class B : public A
{
    public:
        void funet ()
        {
            //int a = privdatA;  // error 1
            int a = protdatA;
                a = publdatA;
        }
};

class C : private A
{
    public:
        void funet ()
        {
            //int a = privdatA;  // error 1
            int a = protdatA;
                a = publdatA;
        }
};

int main()
{
    int a;
    B objB;
//  C objC;

//  a = objB.privdatA;  // error 2
//  a = objB.protdatA;  // error 2
    a = objB.publdatA;

//  a = objC.privdatA;  // error 3
//  a = objC.protdatA;  // error 3
//  a = objC.publdatA;  // error 3

    return 0;
}

// error1 = because of this statement in class A (private : int privdatA;)
// error2 = protdatA was specified as a protected number of class A and we areaccessing it outside the class specified

