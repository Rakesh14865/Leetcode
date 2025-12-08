class Solution {
public:
    int countTriples(int n) {
        int res=0;
        int k=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                k=sqrt((i*i)+(j*j));
                if((k*k)==((i*i)+(j*j)) && k<=n){
                    res++;
                }
                
                }
            }
            return res;
        }
    
    };