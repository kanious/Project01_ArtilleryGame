- How to build and run the project.
  I'm making a private engine responsible for some OpenGL sources and the basic structure and applied it to this project. It is referenced in the form of DLL files and libraries.
  All files related are in the projectDir\Engine.
  This project can be run with Debug, Release mode in x64, x86 build.

  Every physics related codes are in the Update function of classes inside of 02.GameObjects > Bullets filter.
  The code for firing bullets is in the FireBullet function of the Barrel class inside of 02.GameObjects > Character filter.


- GitHub Link:
https://github.com/kanious/Project01_ArtilleryGame


- Simple description of game play
  1. The player tank is dark green and the enemy tank is red.
  2. The weird blue bar attached to the player tank is a barrel that player can rotate.
  3. Bullets will be fired at the angle of the barrel.
  4. Enemy tank has a health point, you should damage all health points to win.
  5. The health point is confirmed by a result message of a bullet firing in the console window.
  6. You can confirm the total number of bullets fired after winning in the console window.
  7. You can switch the camera screen by pressing the F1~F4 keys.


- User Input Options
  You can confirm all user input options in the console window during running the game.
  All user input should only be entered in OpenGL window.

  1: Bounce Bullet Mode
  2: Divided Bullet Mode
  3: Multiple Bullet Mode
  4: Bombing Bullet Mode
  5: Rolling Bullet Mode

  Space: Fire Bullet
  N : New game start
  Backspace: Close game

  (Camera Option)
  F1 : Normal View 
  F2 : Top View
  F3 : Front View
  F4 : Right View

  W, S : Change fire angle (up and down)
  A, D : Change fire angle (left and right)


- Bullet Detail
  1. Bounce Bullet : Bounces 3 times and then explodes
  2. Divided Bullet : Spilts into 6 sub bullets upon reaching the ground
  3. Multiple Bullet : Fires 5 bullets that randomly turn left or right
  4. Bombing Bullet : Drops multiple bombs for 1 second from maximum height
  5. Rolling Bullet : Explodes after rolling for a certain distance upon reaching the ground


- Other functions
  1. Barrel has angle restrictions (can only move between 5 and 85 degrees for up and down)
  2. If the enemy is knocked back and touches the wall, it will bounce.
  3. When the enemy dies, the texture changes to green
  4. Each bullet has a different explosion range and it affects to the size of the explosion effect
  5. Once the bullet is fired, it cannot be fired again until the result is counted (possibly press N to reset)


