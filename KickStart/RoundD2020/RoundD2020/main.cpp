//
//  main.cpp
//  RoundD2020
//
//  Created by Gorakh Chavan on 12/07/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int arr[10000],n;
    cin>>n;

    for(int j=0;j<n;j++)
    {
        int count=0;
        
        cin>>count;
        for(int i=0;i<count;i++)
        {
            cin>>arr[i];
        }
        int breaking_day=0;
        for(int i=0;i<count;i++)
        {
                
                if(i==0 && arr[i+1]<arr[i])
                {
                    breaking_day=breaking_day+1;
                }
                else if(i>0)
                {
                    if(arr[i-1]<arr[i] && arr[i+1]<arr[i])
                    {
                    breaking_day=breaking_day+1;
                    }
                }
                else if(i==count-1 && arr[i-1]<arr[i])
                {
                    breaking_day=breaking_day+1;
                }
                
            
        }
        cout<<"Case #"<<j+1<<": "<<breaking_day<<endl;
    }

    return 0;
}

