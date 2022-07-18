#include <stdio.h>
 
struct book{
    char name[31];  // 书名不超过30字符
    double price;
};
 
int main(){
    int n, i, index_Max = 0 , index_Min = 0;
    struct book books[10]; 
    scanf("%d", &n);
    getchar();  // 从缓冲区读走回车 
    
    for( i=0; i<n; i++ ){
        gets(books[i].name);
        scanf(" %lf", &books[i].price);
        getchar();  // 从缓冲区读走回车 
    }
    
    for( i=1; i<n; i++ ){
        if( books[i].price > books[index_Max].price )
            index_Max = i;
        if( books[i].price < books[index_Min].price )
            index_Min = i;
    }
    
    printf("%.2f, %s\n", books[index_Max].price, books[index_Max].name);
    printf("%.2f, %s", books[index_Min].price, books[index_Min].name);
    
    return 0;
}