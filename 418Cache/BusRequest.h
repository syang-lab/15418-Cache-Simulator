#pragma once
class BusRequest
{
public:
	typedef enum {BusRd, BusRdX} BusMessage; 
	BusRequest::BusMessage command;
	int lineSet;
	int lineTag;
	int cycleCost;
	unsigned long long address;
	unsigned long long orderingTime;
	BusRequest(BusMessage, int, int, int, unsigned long long,unsigned long long);
	BusMessage getCommand();
	int getSet();
	int getTag();
	int getCycleCost();
	unsigned long long getOrderingTime();
	~BusRequest(void);
};

