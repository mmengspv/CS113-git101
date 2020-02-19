/* 
    ---------- วิธีการ clone โฟล์เดอร์  ----------
1. เข้า git bash here 

2. พิม git clone ตามด้วย URL 

3. ถ้าอยากจะเปลี่ยนชื่อ folder ที่จะ clone มาเป็นชื่ออื่น 
    ให้พิม git clone ตามด้วย URL แต่ต้องเขียนชื่อใหม่ข้างหลังสุด
        เช่น git clone ...URL... git102


    ---------- วิธีการสร้าง/แยก branch ----------
1. คำสั่งในการสร้าง branch 
    git branch < ชื่อ branch ที่จะสร้าง >

2. วิธีเช็คว่ามี branch ใดบ้าง ในไฟล์
    git branch
    และจะมี * อยู่หน้า branch ที่กำลังเรียกใช้

3. วิธีเปลี่ยน branch ไปที่อีกอันให้ใช้คำสั่ง
    git checkout < branch ที่ต้องการไป >
    และ * จะไปอยู่หน้าชื่อ branch นั้น

4. หรือจะใช้คำสั่ง 
    git checkout -b < ชื่อ branch ใหม่ >
        จะเป็นการ create branch ใหม่ และ checkout ไป branch นั้นเลย


    ---------- การ merge branch ----------
1. ให้ git checkout ไปที่ branch ที่เป็น branch หลัก อยากเอาอีก branch มาใส่
    เช่น git checkout master //// ไปที่ branch master

2. ให้พิม git merge ใน branchหลัก ตามด้วย branch ที่จะให้เข้ามาอยู่ใน branch master 
    เช่น git merge feature








*/