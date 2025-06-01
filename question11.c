#include <stdio.h>
struct Product 
{
    int id;
    char name[50];
    int qty;
    float price;
};
int main() 
{
    struct Product p[100];
    int n,i,maxQty=0,maxPrice=0;
    float Total=0;
    printf("Enter number of products:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        printf("\nEnter details of product %d:\n",i+1);
        printf("\nProduct ID: ");
        scanf("%d",&p[i].id);
        printf("\nProduct Name: ");
        scanf(" %[^\n]",p[i].name);
        printf("\nQuantity: ");
        scanf("%d",&p[i].qty);
        printf("\nPrice: ");
        scanf("%f",&p[i].price);
        Total=Total+p[i].qty*p[i].price;
        if(p[i].qty>p[maxQty].qty)
        {
            maxQty=i;
        }
        if(p[i].price>p[maxPrice].price)
        {
            maxPrice=i;
        }
    }
    printf("\nTotal Inventory Value: %.2f\n",Total);
    printf("\nProduct with Highest Quantity:\n");
    printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",p[maxQty].id,p[maxQty].name,p[maxQty].qty,p[maxQty].price);
    printf("\nProduct with Highest Price:\n");
    printf("ID: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n",p[maxPrice].id,p[maxPrice].name,p[maxPrice].qty,p[maxPrice].price);
    return 0;
}
