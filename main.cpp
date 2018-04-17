//Author: Zakary Kuns
#include <iostream>

using namespace std;

void rearrangeInts(int&, int&, int&);

int main()
{
        //DO NOT CHANGE WITHIN THIS AREA...
        int red, blue, green;
        cout<<"Enter Red, Green, and Blue values: ";
        cin>>red>>green>>blue;
        //...END OF "DO NOT CHANGE" AREA

       // rearrangeInts(red, green, blue);


        //DO NOT CHANGE WITHIN THIS AREA...
        cout<<"Rearranged....\n";
        rearrangeInts(red, green, blue);
//        cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
        return 0;
        //...END OF "DO NOT CHANGE" AREA


}


void rearrangeInts(int &num1, int &num2, int &num3)
{

        if (num1 > num2 && num1 > num3)
        {
                cout << "RGB: " << num1 << ",";

                if (num2 > num3)
                {
                    cout << num2 << ",";
                    cout << num3 << endl;
                }
                
                else 
                {
                    cout << num3 << ",";
                    cout << num2 << endl;
                }

                

        }

        else if (num2 > num1 && num2 > num3)
        {
                cout << "RGB: " << num2 << ",";

                if (num1 > num3)
                {
                    cout << num1 << ",";
                    cout << num3 << endl;
                }

                else 
                {
                    cout << num3 << ",";
                    cout << num1 << endl;
                }

        }

        else 
        {
                cout << "RGB: " << num3 << ",";
                
                if (num1 > num2)
                {
                    cout << num1 << ",";
                    cout << num2 << endl;
                }

                else
                {
                    cout << num2 << ",";
                    cout << num1 << endl;
                }

        }


        

}
