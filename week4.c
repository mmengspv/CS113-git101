// #include<stdio.h>
// #include<stdlib.h>

// int addTen(int x){ // pass by values จองพื้นที่แล้วพอส่งค่ากลับ ก็จะลบพื้นที่นั้นให้อันอื่นทำงานแทน
//     x += 10;
//     return x;
// }

// int addTwenty(); // pass by reference ไม่มีการกำหนดตัวแปรใน ()
// int x = 2000;

// int main(){
//     int x = 90 ; // ตัวแปร global ต้องกำหนดค่าให้เสมอ ไม่งั้นจะได้ค่าออกมามั่ว
//     int y = addTen(x);
//     printf("addTen in main = %d\n",y);
//     printf("addTwenty in main = %d\n",addTwenty());
// }

// int addTwenty(){
//     x += 20;
//     return x;
// }
