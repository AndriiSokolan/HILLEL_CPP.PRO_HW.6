#include "DetailedReportVisitor.h"
#include "Transaction.h"

void DetailedReportVisitor::visit(Deposit&) {
    std::string message = "Detailed Report: This is a deposit transaction.";
    std::cout << message << std::endl;
    logger.log(message);
}

void DetailedReportVisitor::visit(Withdrawal&) {
    std::string message = "Detailed Report: This is a withdrawal transaction.";
    std::cout << message << std::endl;
    logger.log(message);
}

void DetailedReportVisitor::visit(Transfer&) {
    std::string message = "Detailed Report: This is a transfer transaction.";
    std::cout << message << std::endl;
    logger.log(message);
}

void DetailedReportVisitor::visit(BillPayment&) {
    std::string message = "Detailed Report: This is a bill payment transaction.";
    std::cout << message << std::endl;
    logger.log(message);
}
