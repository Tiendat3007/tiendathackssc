#include<stdio.h>


int main() {
    int n,choice;
    printf("nhap so luong phan tu cho mang: ");
    scanf("%d", &n);
    int arr[n];
    do {
        printf("___________MENU___________\n");
        printf("(1). nhap so phan tu va gia tri cho mang\n");
        printf("(2). in ra gia tri  cua cac phan tu\n");
        printf("(3). tim gia tri lon nhat va nho nhat cua mang\n");
        printf("(4). in ra tong cua tat ca cac phan tu\n");
        printf("(5). them mot phan tu mang vao cuoi\n");
        printf("7. sap xep cac phan tu theo thu tu giam dan (Bubble Sort)\n");
        printf("10. sap xep theo chieu tang dan (Selection Sort)\n");
        printf("0. Thoat\n");
        printf("hay chon chuc nang can thuc thi: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                for (int i= 0;i<n;i++) {
                    printf("arr[%d]=",i);
                    scanf("%d",&arr[i]);
                }
                break;
            case 2:
                printf("mang hien tai la: ");
                for (int i= 0;i<n;i++) {
                    printf("arr[%d] =%d ",i,arr[i]);
                }
                printf("\n");
                break;
            case 3:
                {
                    int max= arr[0],min= arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max) max = arr[i];
                        if (arr[i] < min) min = arr[i];
                    }
                    printf("gia tri lon nhat trong mang al: %d\n", max);
                    printf("gia tri nho nhat trong mang la: %d\n", min);
                }
                break;
            case 4:
                {
                    int sum = 0;
                    for (int i=0;i<n;i++) {
                        sum += arr[i];
                    }
                    printf("tong cac gia tri cua mang la: %d\n",sum);
                }
                break;
            case 5:
                printf("nhap phan tu moi: ");
                int newValue;
                scanf("%d", &newValue);
                arr[n] = newValue;
                n++;
                break;
          
            case 7:
            	int temp;
                 for(int j=0;j<n-1;j++){
	             for(int i =0 ;i<n-j-1;i++){
		        if(arr[i]>arr[i+1]){
			    temp=arr[i];
			     arr[i]=arr[i+1];
		    arr[i+1]=temp;
		}
	}
}
            
                break;
            case 10:
            	for (int i = 0; i < n - 1; i++) {
            int min = i;
             for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min= j;
            }
        }
            if (min!= i) {
            int temp1 = arr[i];
            arr[i] = arr[min];
            arr[min] = temp1;
        }
                break;
                printf("chuc nang khong hop le vui long nhap lai.\n");
        }
    }
    } while (choice != 0);

    return 0;
}
