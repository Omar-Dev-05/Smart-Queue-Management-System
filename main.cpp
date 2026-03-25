//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{

    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscriptionsQueue("B0", 5);


    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\n========================================";
    cout << "\n >>> Pay Bills Queue Info <<<           ";
    cout << "\n========================================\n";
    PayBillsQueue.PrintInfo();

    cout << "\n[ Tickets Line RTL ] ------------------\n";
    PayBillsQueue.PrintTicketsLineRTL();

    cout << "\n[ Tickets Line LTR ] ------------------\n";
    PayBillsQueue.PrintTicketsLineLTR();

    cout << "\n--- All Tickets List ---\n";
    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    cout << "\n----------------------------------------";
    cout << "\n Pay Bills Queue After Serving One client ";
    cout << "\n----------------------------------------\n";
    PayBillsQueue.PrintInfo();


    cout << "\n\n========================================";
    cout << "\n >>> Subscriptions Queue Info <<<      ";
    cout << "\n========================================\n";

    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();

    SubscriptionsQueue.PrintInfo();

    cout << "\n[ Tickets Line RTL ] ------------------\n";
    SubscriptionsQueue.PrintTicketsLineRTL();

    cout << "\n[ Tickets Line LTR ] ------------------\n";
    SubscriptionsQueue.PrintTicketsLineLTR();

    cout << "\n--- All Tickets List ---\n";
    SubscriptionsQueue.PrintAllTickets();

    SubscriptionsQueue.ServeNextClient();
    cout << "\n----------------------------------------";
    cout << "\n Subscriptions Queue After Serving One client ";
    cout << "\n----------------------------------------\n";
    SubscriptionsQueue.PrintInfo();

    cout << "\n========================================\n";
    cout << "          END OF OPERATIONS             \n";
    cout << "========================================\n";

    return 0;

}
