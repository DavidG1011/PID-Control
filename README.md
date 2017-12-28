# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

Rubric [Here](https://review.udacity.com/#!/rubrics/824/view).

---

## PID Definition and Paramaters

PID stands for:

- P: Proportional.

- I: Integral.

- D: Derivative. 

Further information and how PID is used in this model:

- P: Proportional - Steer proportional to the cross track error or CTE multiplied by a factor of Tau. Turns in relation to your desired location.

- I: Integral - Steer proportional to the sum of all CTEs. Used to correct for system bias that would normally prevent the car from reaching the desired location.

- D: Derivative -  Gradually introduces counter-steer to avoid overshooting the target destination or to reduce oscillations associated
with over-steer.

The equation in code is:
`-Kp * cte - Ki * cte_sum - Kd * (cte - prev_cte)` 


The paramater values I chose for my model are the following:

Steering:
- P: 0.1
- I: 0.0005
- D: 3.8

Throttle:
- P: 0.32
- I: 0.0
- D: 0.02

These values were chosen by initially using lecture values, then tuning them to be more accurate for the simulator model.

---

## Video

A video of an autonomous lap using this PID model can be found in the root directory of this repository. [Link](https://github.com/DavidG1011/Udacity-PID-Control/blob/master/AutonomousFullTrack.mp4). (Must be viewed raw).

---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

Tips for setting up your environment can be found [here](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/23d376c7-0195-4276-bdf0-e02f1f3c665d)

## Editor Settings

* indent using spaces
* set tab width to 2 spaces (keeps the matrices in source code aligned)

## Project Instructions

More information is only accessible by people who are already enrolled in Term 2
of CarND. If you are enrolled, see [the project page](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/f1820894-8322-4bb3-81aa-b26b3c6dcbaf/lessons/e8235395-22dd-4b87-88e0-d108c5e5bbf4/concepts/6a4d8d42-6a04-4aa6-b284-1697c0fd6562)
for instructions and the project rubric.
