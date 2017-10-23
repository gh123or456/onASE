DEPTH=2;
GOAL=16;
f(st,dp)
{
    int ans=0;
    if ( dp==DEPTH )return st == GOAL; 
    for(int i=1 ; i<=13 ; ans+=f(st+i,dp+1), ++i);
    return ans;
}
        
main()
{
    printf("%d",f(0,0));
}

