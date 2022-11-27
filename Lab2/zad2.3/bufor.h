#ifndef BUFOR_H
#define BUFOR_H

class Bufor {

    protected: 
    int *ptr;
    unsigned bufsize;
    int iterFirstFree;
    public:
        Bufor();
        Bufor(unsigned tabSize);
        virtual ~Bufor(){delete[] ptr;};
        virtual void add(int value);
        virtual double calculate()= 0;

        int getIndex() {return iterFirstFree;}
        unsigned getSize () { return bufsize; }

        int getTab(int i) {return ptr[i]; }
        void setTab(int pos, int value);

        int getFirst() {return ptr[iterFirstFree - 1]; }
        void setFirst(int value){iterFirstFree = value;};
        void setTab (unsigned iter_at, int value) { ptr[iter_at] = value; }
        void show();

};
#endif // !BUFOR_H