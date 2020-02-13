/*
        วิธีการ upload ไฟล์ลงใน git hub
1.intitialize git (ต้องทำทุกครั้งเมื่อมี repository ใหม้)
    โดยใช้คำสั่ง git init

2.ตรวจสอบสถานะของไฟล์ว่าเปลี่ยนแปลงหรือยัง
    โดยใช้คำสั่ง git status

3.เพิ่มไฟล์เข้าใน staging area เพื่อเตรียม commit ไฟล์
    โดยใช้คำสั่ง 
    git config --global user.name "Your name"
    git config --global user.email "Your email"
    ขั้นตอนนี้ทำเพียงครั้งเดียว

4.Commit ไฟล์เพื่อเก็บ checkpoint ของไฟล์
    git commit -m "Add a.txt" 
    *** ต้องใส่ -m ตลอด ***

5.เชื่อม local respository ของเครื่องเรากับ github 
    ด้วยคำสั่ง git remote add<ชื่อ remote เช่น origin>

6.เมื่อเชื่อม local ในเครื่องกับ remote ที่ github ได้แล้วให้ส่งไฟล์
    โดยการใช้คำสั่ง git push -u origin master

7.เมื่อ push ครั้งแรกต้องใส่ ีusername กับ password ของ github ด้วย

8.ตรวจสอบว่าใน github มีไฟล์ขึ้นมาครบหรือไม่

9.และถ้าอยากตรวจสอบจุด checkpoint ทั้งหมดในเครื่องเราจะสามารถตรวจได้โดย
    git log --all--decorate--oneline--graph

10.ถ้าอยากให้ไฟล์กลับมาจะสามารถทำได้โดย
    10.1 ไฟล์กลับมาทั้งหมด 
            git checkout <commit-id>
    10.2 ไฟล์กลับมาบางไฟล์
            git checkout <commit-id> <ชื่อไฟล์>

*/