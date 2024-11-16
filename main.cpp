#include "Transaction.h"
#include "ShortReportVisitor.h"
#include "DetailedReportVisitor.h"

int main() {
    Deposit deposit;
    Withdrawal withdrawal;
    Transfer transfer;
    BillPayment billPayment;

    ShortReportVisitor shortReport;
    DetailedReportVisitor detailedReport;

    deposit.accept(shortReport);
    deposit.accept(detailedReport);

    withdrawal.accept(shortReport);
    withdrawal.accept(detailedReport);

    transfer.accept(shortReport);
    transfer.accept(detailedReport);

    billPayment.accept(shortReport);
    billPayment.accept(detailedReport);

    return 0;
}
