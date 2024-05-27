#include <iostream>
using namespace std;

// Three function with same name.

/* The formula for the volume of a cylinder is V=Bh or V=πr2h . 
   The radius of the cylinder is 8 cm and the height is 15 cm.
   Substitute 8 for r and 15 for h in the formula V=πr2h. */
// Calculating the volume of a cylinder.
        int volume(int radius, int height){
            return (3.14*radius*radius*height);
        }
/* The volume of a cube V is given by V = a^3 where a = length
 of one side of the cube. V = 4^3 = 64 cubic inches or 
 inches^3. */
// Calculating the volume of a cube.
        int volume(int height){
            return (height*height*height);
        }
/* V = w * h * l	
l= Length, w = Width, h = Height */
// Rectangular box.
        int volume(int length, int width, int height){
            return (length*width*height);
        }

int main(){
cout<<endl;
cout<<"The volume of a cylinder is: "<<volume(10, 16)<<endl;
cout<<endl;
cout<<"The volume of a cube is: "<<volume(16)<<endl;
cout<<endl;
cout<<"The rectangular box is: "<<volume(3, 5, 8)<<endl;
cout<<endl;
    return 0;
}