//Program to remove all the occurances of the ib sentence
#include <iostream>
using namespace std;
int main() {
    char str[]="ysthe the graph";
    int c;
    int count=0;
    for(int i=0;str[i]!='\0';i++)
        { if(str[i]==' ')
            if(str[i+1]=='t')
             if (str[i+2]=='h')
                if(str[i+3]=='e')
                  { count+=3;
                      for(int j =i;str[j]!='\0';j++)
                     {str[j]=str[j+4];}
                      
                  }
                  c=i;
        }
    for(int m=0;m<=c;m++)
    { std::cout<<str[m];
    }

    return 0;
}
