#include "ShortReportVisitor.h"
#include "Transaction.h"

void ShortReportVisitor::visit(Deposit&) {
    std::string message = "Short Report: Deposit transaction.";
    std::cout << message << std::endl;
    logger.log(message);
}

void ShortReportVisitor::visit(Withdrawal&) {
    std::string message = "Short Report: Withdrawal transaction.";
    std::cout << message << std::endl;
    logger.log(message);
}

void ShortReportVisitor::visit(Transfer&) {
    std::string message = "Short Report: Transfer transaction.";
    std::cout << message << std::endl;
    logger.log(message);
}

void ShortReportVisitor::visit(BillPayment&) {
    std::string message = "Short Report: Bill Payment transaction.";
    std::cout << message << std::endl;
    logger.log(message);
}
