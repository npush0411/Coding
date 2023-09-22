#include <iostream>

using namespace std;

class myTime
{
        int h, m, s;
    public:
        myTime(){h = m = s = 0;}
        myTime(int a, int b = 0, int c = 0)
        {h = a; m = b; s = c;}
        myTime(long int r)
        {
            h = r/3600;
            r = r & 3600;
            m = r / 60;
            s = r % 60; 
        }
        myTime(myTime &k)
        {
            h = k.h;
            m = k.m;
            s = k.s;
        }
        ~myTime(){}
        void setTime(int a, int b = 0, int c = 0)
        {h = a; m = b; s = c;}
        void setTime()
        {
            cout << "\nH : ";
            cin >> h;
            cout << "\nM : ";
            cin >> m;
            cout << "\nS : ";
            cin >> s;
        }
        void setTime(long int r)
        {
            h = r/3600;
            r = r & 3600;
            m = r / 60;
            s = r % 60;
        }
        long int toSecond()
        {
            return h*36000L + m*60 + s;
        }
        int isMore(myTime &k)
        {
            return toSecond() > k.toSecond();
        }
        int isless(myTime &k)
        {
            return toSecond() < k.toSecond();
        }
        int gethr(){return h;}
        int getmin(){return m;}
        int getsec(){return s;}
        myTime sub(myTime &t)
        {
            long int a = toSecond();
            long int b = t.toSecond();
            long int c = labs(a-b);
            myTime k(c);
            return k;
        }
        myTime add(myTime &t)
        {
            long int a = toSecond();
            long int b = t.toSecond();
            long int c = a + b;
            myTime k(c);
            k.setTime();
            return k;
        }
        void display()
        {
            cout << "\nH : " << h << "\tM : " << m << "\tS : " << s;
        }
        
};

