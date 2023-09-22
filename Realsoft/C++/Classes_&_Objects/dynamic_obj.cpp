#include <iostream>

using namespace std;

class dynobj
{
        int rno;
        int noi;
        int *ptr;
    public :
        dynobj()
        {
            rno = 0;
            noi = 0;
            ptr = NULL;
        }
        dynobj(int n)
        {
            rno = 0;
            noi = n;
            ptr = new int[noi];
        }
        ~dynobj(){delete [] ptr;}
        void setData()
        {
            cout << "\nRoll No : ";
            cin >> rno;
            setData(rno);
        }
        int total()

        {
            int i = 1, tot = ptr[0];
            for(i = 1; i < noi; tot += ptr[i], i++);
            return tot;
        }
        int avg()
        {
            return total()/noi;
        }
        void display()
        {
            cout << "\n--- Result --\nRoll No : " << rno << "\n-- Marks --\n";
            for(int i = 0; i < noi; cout << ptr[i++] << "\t");
        }
        void setData(int n)
        {
            rno = n;
            cout << "\nSubject Cound : ";
            int tmp;
            cin >> tmp;
            if(tmp != noi)
            {
                delete [] ptr;
                noi = tmp;
                ptr = new int [noi];
            }
            cout << "\n-- Marks --";
            for(int i = 0; i < noi; i++)
                cin >> ptr[i];
        }
};

int main()
{
    dynobj k(7);
    k.setData();
    k.display();
    {
        dynobj p;
        p.setData(6);
        p.display();
    }
}