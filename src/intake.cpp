#include "main.h"
#include "subsystems.hpp"

void intake_controls(){
    if (master.get_digital(DIGITAL_R1)){
        intake.move(127);
    }
    else if (master.get_digital(DIGITAL_R2)){
        intake.move(-127);
    }
    else {
        intake.move(0);
    }

    if (master.get_digital(DIGITAL_L1)){
        outtake.move(127);
    }
    else if (master.get_digital(DIGITAL_L2)){
        outtake.move(-127);
    }
    else {
        outtake.move(0);
    }

    if (master.get_digital(DIGITAL_DOWN)){
        rake.move(127);
    }
    else if (master.get_digital(DIGITAL_UP)){
        rake.move(-127);
    }
    else{
        rake.move(0);
    }
}