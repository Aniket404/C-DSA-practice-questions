 #include <iostream>
 using namespace std;
 int main()
 {
    int ar[10];
    fill_n(ar,10,3); //used to put same values in every location
    for (int i = 0; i <= 10; i++)
    {
     cout << ar[i] << endl<< endl;
    }
  }
