//
//  main.cpp
//  AlgorithmTest
//
//  Created by 융미 on 11/12/2018.
//  Copyright © 2018 융미. All rights reserved.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    int a;
//    std::cin >> a;
//    for(int i = 0; i<a; ++i)
//    {
//        for(int j = 0; j<i; ++j)
//        {std::cout << ' ';}
//        for(int j = 0; j<a-i; ++j)
//        {std::cout << '*';}
//
//        std::cout << '\n';
//    }
//
//    return 0;
//}

//#include <cstdio>
//int main(){
//
//    int n, a;
//
//    scanf("%d", &n);
//    while(true)
//    {
//        if(n%5>0)
//        {
//            if((n%5)%3 == 0)
//            {
//                a = n/5 + (n%5)%3;
//                break;
//            }
//            else{
//                n -= 5;
//
//            }
//        }
//        else{
//            a = n/5;
//            break;
//        }
//    }
//
//
//    printf("%d", a);
//    return 0;
//}

#include <cstdio>
#include <cstring>
#include <bitset>
int main(){
    
    int n, x;
    char c[10];
    std::bitset<20> s;

    scanf("%d", &n);
    
    while(n--)
    {
        scanf("%s", c);
        if(!strcmp(c,"add"))
        {
            scanf("%d", &x);
            s.set(x-1, 1);
        }
        else if(!strcmp(c,"remove"))
        {
            scanf("%d", &x);
            s.set(x-1,0);
        }
        else if(!strcmp(c,"check"))
        {
            scanf("%d", &x);
            
            if(s.test(x-1))
            {
                printf("1\n");
            }else
            {
                printf("0\n");
            }
        }
        else if(!strcmp(c,"toggle"))
        {
            scanf("%d", &x);
            s.flip(x-1);
        }
        else if(!strcmp(c,"all"))
        {
            s.set();
        }
        else if(!strcmp(c,"empty"))
        {
            s.reset();
        }
    }
    
    return 0;
}

