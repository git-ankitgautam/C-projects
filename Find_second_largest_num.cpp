#include<iostream>

using namespace std;
int main()
{
    system("cls");
    int index, i,len, max, arr[]= {265, 5456463, 4546352, 4564684, 235566534, 3587456, 5634568, 921625, 922738, 1230973, 1309316, 2522223, 5514909, 6311029, 7067120, 8022536, 8293007, 11345193, 18131678, 21715623, 21930026, 24710118, 25032453, 26677478, 29940457, 32216866, 35222306, 38697441, 42469585, 43525408, 49174544, 50995053, 54031088, 57351841, 58061186, 62966887, 64705527, 65312817, 68965868, 70603566, 71744714, 73671280, 74303230, 74683645, 74689047, 76328163, 76358927, 76933437, 78381580, 79141986, 87815529, 93400112, 93808179, 96705198, 96780273, 97656612, 99508635};
    max=0;
    len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<=len;i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            index = i;
        }
    }
    for(index=i;i<(len-1);i++)
    {
        arr[i] = arr[i+1];
    }
    int second_max=0;
        for(i=0;i<=len;i++)
    {
        if (arr[i]>second_max)
        {
            second_max = arr[i];
        }
    }
    cout<<"the second largest number is "<<second_max;
    return 0;
}