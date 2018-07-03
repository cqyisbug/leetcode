
int maxProfit(int *prices, int pricesSize)
{
    int i = 0 , j = 0 ,k = 0,result = 0 ;
    for(i = 0 ; i < pricesSize ; ){
        if(prices[i+1] <= prices[i] || i ==pricesSize-1){
            i ++;
            continue;
        }
        for(j = i+1 ; j < pricesSize ; j++){
            if( k!=0){
                if(prices[j] <= prices[j-1]){
                    result += prices[j-1]-prices[i];
                    i = j ;
                    break;
                }
            }
            if(j == pricesSize-1){
                result += prices[j] -prices[i];
                return result;
            }
            k++;
        }
    }
    return result;
}