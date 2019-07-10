/*
 * Problem.h
 *
 *  Created on: Jun 25, 2019
 *      Author: KaneA
 */

#ifndef SUPPORT_PROBLEM_H_
#define SUPPORT_PROBLEM_H_

class Problem {
public:
	Problem(int day) { dayNumber = day; }
	virtual void run()=0;
	virtual ~Problem()=0;

	int dayNumber;
};

#endif /* SUPPORT_PROBLEM_H_ */
