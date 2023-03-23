//C++ Program to remove all the white spaces from a string

#include <iostream>

int main() {
    char str[]="noob the saini";
    int c;
    int count=0;
    for(int i=0;str[i]!='\0';i++)
        { if(str[i]==' ')
                  { count+=1;
                      for(int j =i;str[j]!='\0';j++)
                     {str[j]=str[j+1];}
                      
                  }
                  c=i;
        }
    for(int m=0;m<=c;m++)
    { std::cout<<str[m];
    }

    return 0;
}

