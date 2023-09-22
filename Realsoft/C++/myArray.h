#include <iostream>

using namespace std;

class Array
{
        int x[5];
    public:
        Array();
        Array(int);
        Array(Array &);
        ~Array(){}
        void setData();
        void display();
        int total();
        int avg(){return total()/5;}
        int isMore(int val)
        {
            return (total() > val);
        }
        int isLess(int val)
        {
            return (total() < val);
        }
        int isMore(Array &t)
        {
            return(total() > t.total());
        }
        int isLess(Array &t)
        {
            return (total() < t.total());
        }
        void set(int pos, int d)
        {
            x[pos] = d;
        }
        int get(int pos)
        {
            return x[pos];
        }
        void reverse();
        int maxValue();
        int minValue();
        int maxPosition();
        int minPosition();
        int isOrdered();
        int s_search(int val);
        int b_search(int val);
        void sort();
};

Array :: Array(int val)
{
    for(int i = 0; i < 5; i++)
        x[i] = val;
}

Array :: Array()
{
    for(int i = 0; i < 5; i++)
        x[i] = 0;
}

Array :: Array(Array &t)
{
    for(int i = 0; i < 5; i++)
        x[i] = t.x[i];
}

void Array :: setData()
{
    cout << "\nData\n";
    for(int i = 0; i < 5; i++)
        cin >> x[i];
}

void Array :: display()
{
    cout << "\nArray Data\n";
    for(int i = 0; i < 5; i++)
        cout << x[i] << "\t";
}

int Array :: total()
{
    int tot = x[0];
    for(int i = 1; i < 5; tot += x[i], i++);
    return tot;
}

void Array :: reverse()
{   
    int i = 0, j = 4;
    while(i < j)
    {
        x[i] = x[i] + x[j];
        x[j] = x[i] - x[j];
        x[i] = x[i] - x[j];
    }
}

int Array :: maxValue()
{
    int max = x[0], i = 1;
    while(i < 5)
    {
        if(x[i] > max)
            max = x[i];
        i++;
    }
    return max;
}

int Array :: minValue()
{
    int min = x[0], i = 1;
    while (i < 5)
    {
        if(x[i] < min)
            min = x[i];
    }
    return min;
}

int Array :: maxPosition()
{
    int pos = 0, i = 1;
    while(i < 5)
    {
        if(x[i] > x[pos])
            pos = i;
        i++;
    }
    return pos;
}

int Array :: minPosition()
{
    int pos = 0, i = 1;
    while(i < 5)
    {
        if(x[i] < x[pos])
            pos = i;
        i++;
    }
    return pos;
}

int Array :: isOrdered()
{
    int i = 0, j = 1;
    while(i < 5)
    {
        if(x[i] > x[i+1])
            break;
        i++;
    }
    return (i == 5);
}

int Array :: s_search(int val)
{
    int i;
    for(i = 0; i < 5; i++)
        if(x[i] == val)
            break;
    return (i < 5);
}

int Array :: b_search(int val)
{
    int l = 0, r = 4, mid;
    while(l < r)
    {
        mid = (l+r)/2;
        if(x[mid] == val)
            break;
        else    
            if(x[mid] > val)
                r = mid - 1;
            else
                l = mid + 1;
    }
    return (l < r);
}

void Array :: sort()
{
    for(int i = 0; i < 4; i++)
    {
        int pos = i;
        for(int j = i + 1; j < 5; j++)
            if(x[j] < x[pos])
                pos = j;
        if(i != pos)
        {
            int tmp = x[i];
            x[i] = x[pos];
            x[pos] = tmp;
        }
    }
}
