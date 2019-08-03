#ifndef TICKETMACHINE_H
#define TICKETMACHINE_H

class ticketmachine
{
	public:
		ticketmachine();
		~ticketmachine();
		void showPrompt();
		void insertMoney(int money);
		void showBalance();
		void printTicket();
		void showTotal();
	private:
		const int PRICE;
		int balance;
		int total;	
	protected:
};

#endif
