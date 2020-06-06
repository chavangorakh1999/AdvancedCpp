//
//  main.cpp
//  PatternPrinting
//
//  Created by Gorakh Chavan on 03/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;

//int main()
//{
//    int numberOfRows,row,column;
//    int ch=1;
//    cout<<"Enter number of rows";
//    cin>>numberOfRows;
//    for(row=1;row<=numberOfRows;row++)
//    {
//        for(column=1;column<=row;column++)
//        {
//            cout<<ch++<<" ";
//        }
//        cout<<endl;
//    }
//    for(row=numberOfRows-1;row>=1;row--)
//    {
//        for(column=1;column<=row;column++)
//        {
//            cout<<ch++<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//OUTPUT:
//Enter number of rows5
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
//16 17 18 19
//20 21 22
//23 24
//25

//int main()
//{
//    int numberOfRows,row,column;
//    int ch=64;
//    cout<<"Enter number of rows";
//    cin>>numberOfRows;
////    for(row=1;row<=numberOfRows;row++)
////    {
////        for(column=1;column<=row;column++)
////        {
////            cout<<ch++<<" ";
////        }
////        cout<<endl;
////    }
//    for(row=numberOfRows;row>=1;row--)
//    {
//        for(column=row;column<=numberOfRows;column++)
//        {
//            cout<<(char)(ch+column)<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//}
//OUTPU:
//Enter number of rows5
//E
//D E
//C D E
//B C D E
//A B C D E

int main()
{
    int numberOfRows,row,column;
//    int ch=64;
    cout<<"Enter number of rows";
    cin>>numberOfRows;
//    for(row=1;row<=numberOfRows;row++)
//    {
//        for(column=1;column<=row;column++)
//        {
//            cout<<ch++<<" ";
//        }
//        cout<<endl;
//    }
//    for(row=1;row<=numberOfRows;row++)
//    {
//        for(column=row;column<=numberOfRows;column++)
//        {
//            cout<<(char)(ch+row)<<" ";
//        }
//        cout<<endl;
//    }
//    return 0;
//    output:
//    Enter number of rows5
//    A A A A A
//    B B B B
//    C C C
//    D D
//    E
//      for(row=numberOfRows;row>=1;row--)
//            {
//                for(column=numberOfRows;column>=row;column--)
//                {
//                    cout<<(char)(ch+column)<<" ";
//                }
//                cout<<endl;
//            }
//    Enter number of rows5
//    E
//    E D
//    E D C
//    E D C B
//    E D C B A
//    for(row=numberOfRows;row>=1;row--)
//    {
//        for(column=numberOfRows;column>=row;column--)
//        {
//            cout<<(char)(ch+row)<<" ";
//        }
//
//        cout<<endl;
//    }
//    Enter number of rows5
//    E
//    D D
//    C C C
//    B B B B
//    A A A A A
//    for(row=numberOfRows;row>=1;row--)
//        {
//            for(column=row;column>=1;column--)
//            {
//                cout<<(char)(ch+row)<<" ";
//            }
//
//            cout<<endl;
//        }
//    Enter number of rows5
//    E E E E E
//    D D D D
//    C C C
//    B B
//    A
//    for(row=numberOfRows;row>=1;row--)
//            {
//                for(column=row;column>=1;column--)
//                {
//                    cout<<(char)(ch+column)<<" ";
//                }
//
//                cout<<endl;
//            }
//    Enter number of rows5
//    E D C B A
//    D C B A
//    C B A
//    B A
//    A
//    for(row=1;row<=numberOfRows;row++)
//                {
//                    for(column=numberOfRows;column>=row;column--)
//                    {
//                        cout<<(char)(ch+column)<<" ";
//                    }
//
//                    cout<<endl;
//                }
//    Enter number of rows5
//    E D C B A
//    E D C B
//    E D C
//    E D
//    E
//    for(row=1;row<=numberOfRows;row++)
//                {
//                    for(column=numberOfRows;column>=row;column--)
//                    {
//                        cout<<" ";
//                    }
//                    for(column=1;column<=row;column++)
//                    {
//                        cout<<"*";
//                    }
//                    for(column=1;column<=row-1;column++)
//                    {
//                        cout<<"*";
//                    }
//                    cout<<endl;
//
//                }
//    for(row=numberOfRows-1;row>=1;row--)
//    {
//        for(column=numberOfRows;column>=row;column--)
//        {
//            cout<<" ";
//        }
//        for(column=1;column<=row;column++)
//        {
//            cout<<"*";
//        }
//        for(column=1;column<=row-1;column++)
//        {
//            cout<<"*";
//        }
//        cout<<endl;
//
//    }
//    Enter number of rows5
//        *
//       ***
//      *****
//     *******
//    *********
//     *******
//      *****
//       ***
//        *
//
//    for(row=numberOfRows;row>=1;row--)
//    {
//        for(column=numberOfRows-1;column>=row;column--)
//               {
//                   cout<<"  "<<" ";
//               }
//        for(column=(row*2)-1;column>=1;column--)
//        {
//            cout<<"* "<<" ";
//        }
//        cout<<endl;
//
//    }
//    Enter number of rows5
//    *  *  *  *  *  *  *  *  *
//       *  *  *  *  *  *  *
//          *  *  *  *  *
//             *  *  *
//                *
//    Enter number of rows5
//    *  *  *  *  *
//       *  *  *  *
//          *  *  *
//             *  *
//                *

//    for(row=1;row<=numberOfRows;row++)
//    {
//
//        for(column=numberOfRows-1;column>=row;column--)
//               {
//                   cout<<"  "<<" ";
//               }
//        for(column=((row*2)-1);column>=1;column--)
//        {
//            cout<<"* "<<" ";
//        }
//        cout<<endl;
//
//    }
//    for(row=numberOfRows-1;row>=1;row--)
//    {
//        for(column=numberOfRows-1;column>=row;column--)
//               {
//                   cout<<"  "<<" ";
//               }
//        for(column=(row*2)-1;column>=1;column--)
//        {
//            cout<<"* "<<" ";
//        }
//        cout<<endl;
//
//    }
//    Enter number of rows5
//                *
//             *  *  *
//          *  *  *  *  *
//       *  *  *  *  *  *  *
//    *  *  *  *  *  *  *  *  *
//       *  *  *  *  *  *  *
//          *  *  *  *  *
//             *  *  *
//                *
//     for(row=1;row<=numberOfRows;row++)
//                    {
//                        for(column=numberOfRows;column>=row;column--)
//                        {
//                            cout<<"* "<<" ";
//                        }
//                        for(column=1;column<=row-1;column++)
//                        {
//                            cout<<"  "<<" ";
//                        }
//                        for(column=1;column<=row-1;column++)
//                        {
//                            cout<<"  "<<" ";
//                        }
//                        for(column=numberOfRows;column>=row;column--)
//                        {
//                            cout<<"* "<<" ";
//                        }
//
//                        cout<<endl;
//                    }
//    for(row=numberOfRows-1;row>=1;row--)
//                    {
//                        for(column=numberOfRows;column>=row;column--)
//                        {
//                            cout<<"* "<<" ";
//                        }
//                        for(column=1;column<=row-1;column++)
//                        {
//                            cout<<"  "<<" ";
//                        }
//                        for(column=1;column<=row-1;column++)
//                        {
//                            cout<<"  "<<" ";
//                        }
//                        for(column=numberOfRows;column>=row;column--)
//                        {
//                            cout<<"* "<<" ";
//                        }
//
//                        cout<<endl;
//                    }
    
//Enter number of rows5
//*  *  *  *  *  *  *  *  *  *
//*  *  *  *        *  *  *  *
//*  *  *              *  *  *
//*  *                    *  *
//*                          *
//*  *                    *  *
//*  *  *              *  *  *
//*  *  *  *        *  *  *  *
//*  *  *  *  *  *  *  *  *  *
    for(row=1;row<=numberOfRows;row++)
                       {
                           for(column=numberOfRows;column>=row;column--)
                           {
                               cout<<"  "<<" ";
                           }
                           for(column=1;column<=row-1;column++)
                           {
                               cout<<"* "<<" ";
                           }
//                           for(column=numberOfRows;column>=row;column--)
//                           {
//                               cout<<"* "<<" ";
//                           }
       
                           cout<<endl;
                       }
    for(row=numberOfRows-1;row>=1;row--)
                        {
                            for(column=numberOfRows;column>=row;column--)
                            {
                                cout<<"  "<<" ";
                            }
                            for(column=1;column<=row-1;column++)
                            {
                                cout<<"* "<<" ";
                            }
//                            for(column=1;column<=row-1;column++)
//                            {
//                                cout<<"  "<<" ";
//                            }
//                            for(column=numberOfRows;column>=row;column--)
//                            {
//                                cout<<"* "<<" ";
//                            }
    
                            cout<<endl;
                        }
//    Enter number of rows5
//                
//             *
//          *  *
//       *  *  *
//    *  *  *  *
//       *  *  *
//          *  *
//             * 
    
    
}
