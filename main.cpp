#include <iostream>

 main()
 {
int a,b,c,max;
   std::cout<<"enter your numbers : ";
   std::cin>>a>>b>>c;
   max=a ;
     if (b>max)
         max=b;
     if (c>max)
         max=c;
     std::cout<<"the max is "<<max<<std::endl;


}
