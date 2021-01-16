#include <iostream>

class stringtensions {

public:
	double tension;
	double frequency;
	//double string_gauge;
	stringtensions *next;

};

void sortnodes(stringtensions *stringfrequency) {
	stringtensions *tempnode = stringfrequency;
	stringtensions *swap = new stringtensions;

	while (tempnode->next != nullptr) {
		if ((tempnode->tension) > (tempnode->next->tension)) {

			swap = tempnode;
			tempnode = tempnode->next;
			tempnode->next = swap;
		}

		tempnode = tempnode->next;
	}
}

double returntension(stringtensions *stringtension, double request_frequency) {
	double tension;
	double frequency = request_frequency;
	bool closest = false;

	stringtensions *tempstring = new stringtensions;
	tempstring = stringtension;

	while (!closest) {

		if ((tempstring->frequency)==frequency) {
			closest = true;
			tension = tempstring->tension;
			break;
		}
		else if(((tempstring->frequency)<frequency)&& frequency<(tempstring->next->frequency)){
			tension = ((tempstring->tension)+tempstring->next->tension)/2;
			break;
		}
		tempstring = tempstring->next;
	}

	return tension;
}

int main();
int main() {

	stringtensions *node_11 = new stringtensions();
	stringtensions *node_10 = new stringtensions();
	stringtensions *node_9 = new stringtensions();
	stringtensions *node_8 = new stringtensions();
	stringtensions *node_7 = new stringtensions();
	stringtensions *node_6 = new stringtensions();
	stringtensions *node_5 = new stringtensions();
	stringtensions *node_4 = new stringtensions();
	stringtensions *node_3 = new stringtensions();
	stringtensions *node_2 = new stringtensions();
	stringtensions *node_1 = new stringtensions();

	//30lb
	node_11->tension = 30;
	node_11->frequency = 1320;
	node_11->next = nullptr;
	//29lb
	node_10->tension = 29;
	node_10->frequency = 1280;
	node_10->next = node_11;
	//28lb
	node_9->next = node_10;
	node_9->tension = 28;
	node_9->frequency = 1243;
	//27lb
	node_8->next = node_9;
	node_8->tension = 27;
	node_8->frequency = 1208;
	//26lb
	node_7->next = node_8;
	node_7->tension = 26;
	node_7->frequency = 12;
	//25lb
	node_6->next = node_7;
	node_6->tension = 25;
	node_6->frequency = 1184;
	//24lb
	node_5->next = node_6;
	node_5->tension = 24;
	node_5->frequency = 1145;
	//23lb
	node_4->next = node_5;
	node_4->tension = 23;
	node_4->frequency = 1115;
	//22lb
	node_3->next = node_4;
	node_3->tension = 22;
	node_3->frequency = 1080;
	//21lb
	node_2->next = node_3;
	node_2->tension = 21;
	node_2->frequency = 1035;
	//20lb
	node_1->next = node_2;
	node_1->tension = 20;
	node_1->frequency = 1000;

	double frequency;
	std::cout << "Enter String Frequency" << std::endl;
	std::cin >> frequency;

	std::cout << "Your tension (to nearest 0.5lb) is at ";
	std::cout << returntension(node_1, frequency);

	return 0;
}
