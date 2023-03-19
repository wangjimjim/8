#include <stdio.h> 
#include <stdlib.h>

 int getVal( char card[ 5 ])  
{
     int p,s;
     if (card[ 1 ]== ' 0 ' ) p= 9 ;
     else  if (card[ 0 ]== ' 1 ' ) p= 0 ;
     else  if (card[ 0 ]== ' 11 ' ) p= 10 ;
     else  if(card[ 0 ]== ' 12 ' ) p= 11 ;
     else  if (card[ 0 ]== ' 13 ' ) p= 12 ;
     else p=card[ 0 ]- ' 0 ' - 1 ;
     int len= strlen(card);
     if (card[len- 1 ]== ' C ' ) s= 0 ;
     else  if (card[len- 1 ]== ' D ' ) s= 1;
     else  if (card[len- 1 ]== ' H ' ) s= 2 ;
     else  if (card[len- 1 ]== ' S ' ) s= 3 ;
     return p* 4 + s;
}
void output( int n)  
{
    printf( "  " );
     int p=n/ 4 ;
     if (p== 9 ) printf( " 10 " );
     else  if (p== 0 ) printf( " 1 " );
     else  if (p== 10 ) printf( " 11 " );
     else  if (p== 11 ) printf( " 12 " );
     else  if (p== 12 ) printf( " 13 ");
     else printf( " %c " ,p+ 1 + ' 0 ' );
     int s=n% 4 ;
     if (s== 0 ) printf( " C " );
     else  if (s== 1 ) printf( " D " );
     else  if (s== 2 ) printf( " H " );
     else printf( " S " );
}
void setPos( int b,int g[])    
{
    int e=g[0];
     switch (b)
    {
     	case 2:
            g[ 0 ]=g[ 1 ]; g[ 1 ]=e;   break ;
         case 3:    
            g[ 0 ]=g[ 1 ]; g[ 1 ]=g[ 2 ]; g[ 2 ]=e; break ;
         case 4:     
            g[ 0 ]=g[ 2 ]; g[ 2 ]=g[ 1 ]; g[ 1 ]=g[ 0 ]; g[ 0 ]=e; break ;
         case 5:     
            g[ 0 ]=g[ 2 ]; g[ 2 ]=g[ 1 ]; g[ 1 ]=e; break ;
         case 6:   
            g[ 0 ]=g[ 2 ]; g[ 2 ]=e;   break ;
    }

}
int main()
{
    int t,iCase= 0 ;
    scanf( " %d " ,& t);
     while (t-- )
    {
        char str[ 5 ];
         int cnt[ 4 ];                 
        cnt[ 0 ]=cnt[ 1 ]=cnt[ 2 ]=cnt[ 3 ]= 0 ;
         int i,j;
         int card[ 5 ];
         for (i= 0 ;i< 5 ;i++ )
        {
           scanf( " %s " ,str);
           card[i] = getVal(str);
           cnt[card[i] % 4 ]++ ;
        }
        for (i= 0 ;i< 4 ;i++ )
             for (j= 0 ;j< 4 -i;j++ )
                if (card[j]>card[j+ 1 ])
               {
                  int temp=card[j]; card[j]=card[j+ 1 ]; card[j+ 1 ]= temp;
               }
        int one= 52 ,two= 52 ;        
        int d;
         for (i= 0 ;i< 4 ;i++ )
        {
            int g[ 5 ];               
            int num= 0 ;
             if (cnt[i]> 1 )
            {
                for (j= 0 ;j< 5 ;j++)   
                    if (card[j]% 4 ==i) g[num++]= j;
                 int id2= 1 ;        
                for (j=num- 1 ;j> 1 ;j-- )
                {
                    d =card[g[ 0 ]]+ 52 - card[g[j]];
                     if (d> 0 && d<= 24 ) id2= j;
                     else  break ;
                }
                d =card[g[id2]]-card[g[ 0 ]];
                 if (d> 24 )
                {
                    if (one>card[g[ 0 ]])
                    {
                         one =card[g[ 0 ]] ; two= card[g[id2]];
                    }
                }
                else
                {
                    if (one> card[g[id2]])
                    {
                         one =card[g[id2]] ; two=card[g[ 0 ]];
                    }
                }
            }
        }
        int ans[ 5 ];
        ans[ 0 ]=one; ans[ 1 ]= two;
        j = 2 ;
         for (i= 0 ;i< 5 ;i++ )
             if (card[i]!=one && card[i]!=two) ans[j++]= card[i];
        d =(ans[ 0 ]-ans[ 1 ]+ 52 )% 52 ;
        d =d/ 4 ;
        setPos(d, &ans[ 2 ]);      
        printf( " Problem %d: " ,++ iCase);
         for (i= 0 ;i< 5 ;i++ )
            output(ans[i]);
        printf( " \n " );
    }
    return  0 ;
}

