class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven=0;
        int sumOdd=0;
        for(int i=0;i<n*2;i++){
            if(i%2==0){
                sumEven = sumEven+i;
            }
            sumOdd = sumOdd +i;
        }
        cout<<sumOdd<<'\n'<<sumEven;
        while(sumOdd >0 && sumEven>0){
            if(sumOdd > sumEven) {
                sumOdd =sumOdd %sumEven;
            }
            else{
                sumEven = sumEven%sumOdd; 
            }
        }
        if(sumOdd ==0) return sumEven;
        return sumOdd;
    }
};