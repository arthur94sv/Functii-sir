#include <iostream>

using namespace std;
void verificare (int a[], int);
int suma (int a[], int);
void ordonat(int a[], int n);
void divizibil (int a[], int);

int main()
{
    int a[12] = {1, 5, 3, 9, 13, 17, -3, 6, 99, 10, 18, 22};
     int i;
     char varianta;
     char raspuns;
     for (i=0; i<=12; i++)
        cout <<"a[" << i << "]="<< a[i] << endl;
      do {
      cout << "Ce doriti sa calculati: v - verficiat daca o valoare se afla in sir; s - calulat suma valorilor din sir; o - ordonat sirul crescator; d - verificat daca valorile din sir sunt divizibile cu un anumit numar; "; cin >> varianta;
      switch (varianta)
      {case 'v':
        verificare (a, 12);
        break;

       case 's':
        cout << "Suma valorilor din sir este: " << suma (a, 12) << endl;
       break;

        case 'o':
        ordonat (a, 12);
        for (i=0; i<=12; i++){
            cout << "a[" << i << "]=" << a[i] << endl;
        }
        break;

        case 'd':
           divizibil (a,12);
        break;
      }

      cout << "Mai continuati? (d/n) : "; cin >> raspuns;
      }
      while (raspuns=='d');
      cin.get();
      cin.get();

    return 0;
}

void verificare (int a[], int)
{
    int i, v;
    cout << "Introduceti nr dumneavoastra: "; cin >> v;
    for (i=0; i<=12; i++)
    {
        if (v==a[i])
        cout << "Valoarea este prezenta" << endl;
        else
        cout << "Valoarea nu este prezenta" << endl;
        break;
    }

    }

int suma (int a[], int)
{
   int i, sum;
   sum = 0;
   for (i=0; i<12; i++)
    sum = sum + a[i];
    return sum;
   }

void ordonat(int a[], int n)
{
   int i, aux, fanion, k;
   k=0;
   do
   {
      fanion = 0;
      for(i = 0; i < n-1-k; i++)
      {
         if(a[i] > a[i+1])
         {
            aux = a[i];
            a[i] = a[i+1];
            a[i+1] = aux;
            fanion = 1;
         }
      }
      k++;
   }
   while (fanion);
}


void divizibil (int a[], int)
{
    int i, n;
    cout << "Introduceti nr dumneavoastra: "; cin >> n;
    for (i=0; i<=12; i++)
    {
        if (a[i]%n==0)
        cout << "a[" << i << "]=" << a[i] << " Divizibil cu nr introdus" << endl;
        else
        cout << "a[" << i << "]=" << a[i] << " Nu este divizibil cu nr intodus" << endl;

    }

    }
