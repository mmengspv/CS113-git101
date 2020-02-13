// #include<stdio.h>
// #include<stdlib.h>
// void addTen(int arr[][n], int n ) // การส่งarray เข้ามาหลายมิติ มิติสุดท้ายจะต้องบอกขนาดของมันด้วย
// void addTen(int *arr, int n){ // การส่งแบบ pass by reference มาต้องรับด้วย pointer *
//         for(int i = 0 ; i < n ; i++){
//             printf("addTen [%p] = %d\n", arr+i, *(arr+i));
//             *(arr + i) += 10;
//         }
//     }
// int addTwenty(int *n){ // การส่งแบบ pass by reference มาต้องรับด้วย pointer *
//     *n += 20;
//     return 1; 
//     }
// int main(){
//     int number[] = {1, 2, 3, 4, 5};
//     int n = 5;
//     addTen(&number[0], n); // ส่ง address เข้าไปเป็นการส่งเเบบ pass by reference
//     for(int i = 0 ; i < n ; i++){
//         printf("[%d] = %d", i, arr[i]);
//         printf("main [%p] = %d\n", number+i, *(number+i));

//     }
//     addTwenty(&n);
//     addTwenty(&number[4]);
//     printf("n = %d\n", n);
//     printf("number[4] = %d", number[4]);
// }