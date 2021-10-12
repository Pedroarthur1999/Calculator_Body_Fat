#include <iostream>
#include <iomanip>
#include <cstdlib>
void falkner(float tr, float si, float sb, float ab);

using namespace std;

int main()
{
    float tr, si, sb, ab;

    cout<<endl<< "                                            Body Fat Calculator "<<endl<<endl<<endl;

    falkner(tr,si,sb,ab);

    cout<<endl;

    system("pause");


    return 0;
}
void falkner(float tr, float si, float sb, float ab){

   cout<<" Insira a dobra Triciptal: ";
   cin>>tr;
   cout<<endl;

   cout<<" Insira a dobra Suprailiaca: ";
   cin>>si;
   cout<<endl;

    
   cout<<" Insira a dobra Sub-escapular: ";
   cin>>sb;
   cout<<endl;

   cout<<" Insira a dobra Abdominal: ";
   cin>>ab;
   cout<<endl;

   float total;

   total = (tr+si+sb+ab)*0.153 + 5.783;

   cout<<" Porcentagem de gordura corporal: "<<fixed<<setprecision(2)<<total<<"%"<<endl<<endl;


}
