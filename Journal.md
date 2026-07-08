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

Devlog #3: ~ 2 hours
I am not a coder by any means... and it doesn't help when arduino IDE doesn't let you test your code without a board connected. Uh!
So, I have set up all the components but not yet created a loop. Why'd it take me so long to do this? 'Cause i've got no idea what I'm doing, and thus a million google searches occured. However, I am proud to announce that this work is NOT AI slop!
<img width="552" height="332" alt="Screenshot 2026-07-08 205611" src="https://github.com/user-attachments/assets/6a9f6f82-18dd-48d4-8bdd-b3d51d373a33" />
<img width="507" height="320" alt="Screenshot 2026-07-08 205624" src="https://github.com/user-attachments/assets/7f65de2f-e660-43b1-a098-c836a4344222" />
From here, I am going to get a rough code into the loop, but i won't be able to test it until I am able to build the code.

Devlog #4: ~ 45 minutes
Coding is very draining, hence why I am writing more devlogs. I've managed to add what I think is the coreect code for the alarm to display numbers and when it reaches 07:00, starts buzzing and asks a question. 
<img width="361" height="320" alt="image" src="https://github.com/user-attachments/assets/87c77426-030d-49e7-890a-0d0e5d51ff2f" />
Looking at the code again, I have realised that I need to store the random numbers, otherwise I won't be able to have a user input. Lucky Me! (That was sarcasm)

Devlog #5 ~ 20 minutes
OMG it's done!
That actually took a lot less time than I thought it would.
I can't test the code right now, as I haven't built the alarm yet, but I reckon when I do, I will have to change some of the code so it works. But, I will be debugging it as much as I can.
<img width="304" height="314" alt="Screenshot 2026-07-08 215142" src="https://github.com/user-attachments/assets/9ff90e32-dac0-4365-b0bb-13e7cfcba326" />
<img width="245" height="286" alt="Screenshot 2026-07-08 215156" src="https://github.com/user-attachments/assets/84365d3b-e090-4cb2-a4e2-2429674daa0d" />
<img width="253" height="86" alt="Screenshot 2026-07-08 215203" src="https://github.com/user-attachments/assets/b2a6da96-55bc-4564-9709-54bf6cdd74dc" />

