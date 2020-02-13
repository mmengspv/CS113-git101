// #include<stdio.h>
// #include<stdlib.h>
// int main(){
    // int x = 100;
    // int q = 0144; // 00 เลขฐาน 8
    // int w = 0x64; // 0x เลขฐาน 16
    // printf("x = %d\n",x);
    // printf("reference of x = %lu\n",&x); // unsigned long
    // printf("reference of x = %p\n",&x); 

    // int number[] = {1, 2, 3, 4, 5, 6,};
    // int number[100];
    // int number[100] = {1, 2, 3, 4, 5, 6,};
    // // ถ้า printf number[1000] จาก number[] จะได้ค่าเท่ากับ 0
    // printf("index 1 = %d\n",number[1]);
    // printf("reference of number[0] = %p\n",&number[0]);
    // printf("reference of number[1] = %p\n",&number[1]);
    // printf("reference of number = %p\n",number); // ชื่อ array จะเก็บค่าตัวแรกของตัวใน array เสมอ
    // printf("reference of number = %p\n",number+1); 
    // // number + 1 คือจะเลื่อนไปตัวต่อไปใน array หรือ + ตำแหน่ง address ที่ต้องการเข้าไปเท่ากับพื้นที่ที่ type นั้นต้องการ

    // int number[] = {1, 2, 3, 4, 5, 6,};
    // int *ptr = &x ; // ประกาศ pointer must be * วางตัวนี้ชี้ไปที่ address ของตัวแปรที่เราต้องการ
    // int *arrPtr;
    // arrPtr = number; // สมมติ 0x00
    // arrPtr += 3;
    // *arrPtr += 3;
    // printf("arrPtr = %p, *arrPtr = %d\n",arrPtr,*arrPtr);
    // ประกาศ *arrPtr แล้ว เวลาจะเก็บก็เก็บเป็น ที่อยู่ address

    // int number[] = {1, 2, 3, 4, 5, 6,};
    // for(int *ptr = number ; ptr <= &number[5] ; ptr++){
    //     printf("[%p] = %d\n",ptr, *ptr);
    // }
    // int *ptr2 = number;
    // for(int i = 0 ; i <= 5 ; i++){
    //     printf("[%p] = %d\n",ptr2+i, *(ptr2+i));
    // }

    // char input[100];
    // int count = 0;
    // char c;
    // while((c = getchar()) != '\n'){
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0'; // เป็นfgets gets ไม่ต้องปิด แต่ถ้าเป็น getchar ต้องปิดด้วย NULL เสมอ
    // for(char *cPtr = input ; *cPtr != '\0' ; cPtr++){
    //     printf("%c\n",*cPtr);
    // }
    
    // char s[100];
    // int i;
    // char c;
    // scanf("%d = %c = %s", &i, &c, s); 
    // // int char float ทุกตัวต้องใส่ & นำหน้าการรับค่าใน scanf ยกเว้น string ที่ไม่ต้องใส่ &
    // scanf("%d -- c -- %s", i, c, s);

// }