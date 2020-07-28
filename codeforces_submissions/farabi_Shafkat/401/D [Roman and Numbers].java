
import java.util.Scanner;

public class Roman {

    
    
    public static void main(String[] args) {
        // TODO code application logic here
        String s;
        int m;
        Scanner sc=new Scanner(System.in);
        s=sc.next();
        m=sc.nextInt();
        int sz=s.length();
        int mx=1<<sz;
        long  dp[][]=new long[mx+10][110];
        dp[0][0]=1;
        long fact[]=new long[19];
        fact[0]=1;
        fact[1]=1;
        for(int i=2;i<=18;i++)
        {
            fact[i]=i*fact[i-1];
        }
        int num[]=new int[10];
        for(int i=0;i<s.length();i++)
        {
            num[s.charAt(i)-'0']++;
        }
        long prod=1;
        for(int i=0;i<10;i++)
        {
            prod*=fact[num[i]];
        }
        for(int mask=0;mask<mx;mask++)
        {
            for(int mod=0;mod<m;mod++)
            {
                for(int k=0;k<sz;k++)
                {
                    
                        
                  //  if((mask|(1<<k))==2&&(mod*10+s.charAt(k)-'0')%m==0)//&&(mod*10+(s.charAt(k)-'0'))==0)
                       // System.out.println(mask+" ere "+mod+" "+s.charAt(k));
                    if((mask&(1<<k))!=0)
                        continue;
                    if((mask==0)&&(s.charAt(k)-'0')==0)
                        continue;
                    dp[(mask|(1<<k))][(mod*10+(s.charAt(k)-'0'))%m]+=dp[mask][mod];
                }
            }
        }
       
       
     
        System.out.println(dp[mx-1][0]/prod);
        
    }
    
}
