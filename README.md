# Elevator Demo

## Tech Stacks
- Unreal Engine 5
- C++
- Blueprint scripting

## Features
1. **Movement**
   - Basic character movement capabilities.

2. **Firing**
   - Ability to fire projectiles. (**Z** Key)
   <br/>
   <img src="/Screenshots/02a_Projectile.webp" alt="Description" width="600" height="400">

3. **Death Mechanic**
   <br/>
   - When HP reaches **0**, the character transitions to a ragdoll state upon death. Players may also die via falling off the map.
   <img src="/Screenshots/03a_Ragdoll.webp" alt="Description" width="900" height="450">
   <img src="/Screenshots/03b_Death_by_Out_of_Bounds.webp" alt="Description" width="900" height="450">

4. **Respawn Mechanic**
   - Respawns character using either randomized spawn positions (**Tab** key) or fixed floor spawn positions (**Shift + 1/2/3/4/5**).

5. **User-Interactable Elevator System**
   <br/>
   - Interactive elevator that players can control.
   <img src="/Screenshots/04a_Elevator_Idle.webp" alt="Description" width="900" height="450">
   <img src="/Screenshots/04b_Elevator_Internal.webp" alt="Description" width="900" height="450">

## Disclaimer
This project is currently developed for prototyping and testing purposes. As such, it should only be distributed for **non-commercial** uses.

## Checklists
- Core Requirement Features:
  - [x] User-Interactable Elevator System

- Complimentary Features:
  - [x] Movement
  - [x] Firing
  - [x] Death & Respawn Mechanic

- Nice to Have Bonus Features:
  - [ ] Bonus #1: A.I
  - [ ] Bonus #2: Goal Location on Random Floor

## Resources
### Official Documentation
- [Unreal Engine Multiplayer Programming Quick Start](https://dev.epicgames.com/documentation/en-us/unreal-engine/multiplayer-programming-quick-start-for-unreal-engine?application_version=5.4)
- [Unreal Engine RPCs](https://dev.epicgames.com/documentation/en-us/unreal-engine/rpcs?application_version=4.27)

### YouTube Videos
- [Yaakuro Tutorial](https://www.youtube.com/watch?v=xxX2gYRRTFo)
- [Matt Aspland Tutorial](https://www.youtube.com/watch?v=HewLoAfsAeY)
- [Gorka Games Tutorial](https://www.youtube.com/watch?v=ef6SeknakeU)
