#pragma config(Motor,  port2,           m1,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           m2,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           m4,            tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           m3,            tmotorVex393_MC29, openLoop, reversed)

task main()
{
	wait1Msec(500);
	while(true){
	int spd = 70;
	motor[m1] = spd;
	motor[m2] = spd;
	motor[m3] = spd+4;
	motor[m4] = spd;


	}


}
