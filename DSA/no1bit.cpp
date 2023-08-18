 #include <iostream>

 using namespace std;
 
 int hammingWeight(int n) 
 {
        int count = 0;
        while(n != 0)
        {
            if(n&1)
                count++;
            n = n>>1;
        }
        return count;
}

int main()
{
    int n;
    cout<< "Enter Binary no : ";
    cin>>  n;
    cout<< endl<<"No of set bits are "<< hammingWeight(n);

    return 0;
}