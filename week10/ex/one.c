#include <stdio.h>
#include <stdlib.h>

struct item {
    int ID;
    char name[50];
    float price;
    int quantity;
};

struct item * readGroceryList(int count){
    struct item * gitems = (struct item * ) malloc(sizeof(struct item)*count);
    int uniqNum = 1;
    int i;

    for(i = 0; i < count;i++){
        gitems[i].ID = uniqNum++;
        printf("Enter the details for items %d: \n",i+1);
        printf("Name: ");
        scanf("%s",gitems[i].name);

        printf("Price: ");
        scanf("%f",&gitems[i].price);

        printf("Quantity: ");
        scanf("%d",&gitems[i].quantity);

    }

    return gitems;
}

void printGroceryList(struct item * gitems,int count)
{
    printf("\n");
    int i;
    for(i = 0;i<count;i++){
        printf("Item ID: %d",gitems[i].ID);
        printf("Name: %s\n",gitems[i].name);
        printf("Price: %f\n",gitems[i].price);
        printf("Quantity: %d\n",gitems[i].quantity);
    }
}

struct item findItem(int qVal,struct item * gitems, int count ){

    int i = 0;
    int index = -1;

    while(i < count){

        if (gitems[i].quantity == qVal)
        {
            index = i;
            return gitems[index];
        }
        i++;
    }

    struct item emptyitem;
    emptyitem.ID = -1;
    return emptyitem;
}

struct item findMaxPriceitem(struct item * gitems,int count){
    int maxIndex = -1;
    int maxPrice = -1;
    int i = 0;
    while(i < count){
        if (gitems[i].price > maxPrice){
            maxPrice = gitems[i].price;
            maxIndex = i;
        }
        i++;
    }
    return gitems[maxIndex];

}

int main() {
    int num_q;
    printf("Enter number of unique grocery items in the store: ");
    scanf("%d",&num_q);
    struct item *gitems_main = readGroceryList(num_q);
    
    printGroceryList(gitems_main,num_q);

    /*int qVal;
    printf("Enter the quantity you wish to find: ");
    scanf("%d",&qVal);
    struct item fitem = findItem(qVal,gitems_main,num_q);

    if(fitem.ID == -1){
        printf("\n Item not found\n\n");
    }
    else
    {
        printf("\n item found with quantity %d is\n",qVal);
        printf("ID %d",fitem.ID);
        printf("Name: %s",fitem.name);
        printf("Price: %f \n\n",fitem.price);
    }
    */

    struct item maxItem = findMaxPriceitem(gitems_main,num_q);
    printf("The item with maximum price is : \n");
    printf("ID is %d ", maxItem.ID);
    printf("Name is %s ", maxItem.name);
    printf("Price is %f ", maxItem.price);
    printf("Quantity is %d ", maxItem.quantity);
}