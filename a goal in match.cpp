

        long long a[n];
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        long long ans=0;
        for(int i=0;i<n-1;i++)
            ans+=a[i];
            cout<<-1*ans<<endl;
        
       
    }
    return 0;
}