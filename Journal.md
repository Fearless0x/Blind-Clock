Devlog #1: ~ 2 hours
I started with the PCB design in KiCAD. The schematic was quite hard to work out, I had to use a matrix in order for the switches to fit 
the number of pins. The display and buzzer were also added for the main alarm clock functions.
<img width="313" height="337" alt="Screenshot 2026-07-06 110611" src="https://github.com/user-attachments/assets/6d37e4ae-25c1-462c-b62f-6d8fa845bfda" />

The most challenging part of connecting the PCB was adding the connections. The circular design means that many parts were in the center.
This makes it very difficult to have all the connections. Initially, I started with 2 copper layers. After believing that all connections were made, I was very happy.
Until I realised that i hadn't connected the display...uh. This was because the footprint and the symbol didn't line up. After fixing that, I once again attempted to 
connect everything, but just those extra six connections made it impossible. So, i added 2 copper layers which made the connections both easier and neater.
So, the PCB is done!
<img width="299" height="293" alt="Screenshot 2026-07-07 154513" src="https://github.com/user-attachments/assets/c0f41060-9f3f-4bce-9ed3-288fc25ae2ea" />

Onto the case...

Devlog #2: ~ 4-5 hours 
Case complete!
This bit was quite tough, but manageable. I had to import the PCB into OnShape in order to design the case in context. I had to cut out the keyswitch shapes and a gap for the display out of a hollow cylinder. Then I created a bottom cap for the alarm. Getting some sort of cable hole was tricky, but after a quick google search, I knew to create a plane on the side on the cylinder, which I could then create a sketch on. Once that was cut out, I then filleted the top and bottom to create a sleak look.
<img width="317" height="211" alt="image" src="https://github.com/user-attachments/assets/462d51c6-0f87-434c-81b0-04dfe65fcd8b" />
<img width="329" height="301" alt="image" src="https://github.com/user-attachments/assets/ca4fc054-82b0-493a-b5ff-5ac8a51d219b" />
